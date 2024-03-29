#!/usr/bin/perl

# Darius (23/3/2022):

# bench_perfs.pl c'était le script de benchs de non-regression, et ca benchmark à peu près tous nos algo, Usuba vs Usuba (prévu pour être lancé après un commit par exemple). La manière dont ca marche:

# $ref_files_dir contient le code C généré par la version Usuba de référence
# le script génère le code C pour pas mal de code Usuba, puis les compile, compile les fichiers de référence, et compare les perfs.
# Pour set la version de référence à la version courante, faut appeler le script avec le flag --set-ref (ou juste -s)).


=head

This scripts runs the performance benchmarks. It saves the results in a .json file.

To add a new ciphers, modify the %ciphers hash.

TODO: running the benchmarks is not multi-thread. There is a bug in
Statistics::Test::WilcoxonRankSum preventing the use of the "threads"
core module. As a result, I'm using Parallel::ForkManager, and sharing
data structures is a bit more tedious. Still, doable, cf the doc.

TODO: computing statistics (with Statistics::Test::WilcoxonRankSum)
can take a bit of time, and is not currently multi-threaded, because
this is done while printing. To save time, there should be a first
(multithreaded) loop that computes the statistics, and finally a
simple function that prints the results.

=cut

use strict;
use warnings;
use v5.14;
use autodie qw( open close );
$| = 1;

use Getopt::Long;
use Cwd;
use File::Path qw( remove_tree make_path );
use File::Copy;
use File::Copy::Recursive qw( dircopy );
use FindBin;
use List::Util qw( sum max );
use JSON;
use POSIX qw( strftime );
use Term::ANSIColor;
use Statistics::Test::WilcoxonRankSum;
use Parallel::ForkManager;

my $bench_dir     = "$FindBin::Bin";
my $usuba_dir     = "$bench_dir/../usuba";

my $make    = 1; # Re-compile Usuba
my $gen     = 1; # Compile .ua ciphers
my $compile = 1; # Compile .c ciphers
my $run     = 1; # Run benchmark
my $set_ref = 0; # Set new reference
my $quick   = 0; # Do a quick run
my $thread_count = 4; # Number of parallel threads

GetOptions(
    "dir=s"          => \$usuba_dir,
    "make|m!"         => \$make,
    "gen|g!"          => \$gen,
    "compile|c!"      => \$compile,
    "run|r!"          => \$run,
    "set-ref|s!"      => \$set_ref,
    "quick|q!"        => \$quick,
    "thread-count|j=i" => \$thread_count
    ) or die "Error in command line arguments";

# directories
my $work_dir = '/tmp/usuba_perfs';
my $header_file   = "$usuba_dir/arch";
my $ua_source_dir = "$bench_dir/examples/samples/usuba";

# files
my $bench_main    = "$bench_dir/bench/bench.c";

# flags
my $cc = 'clang';
my $cflags = "-march=native -O3 -fno-tree-vectorize -fno-slp-vectorize -Wall -Wextra -Wno-missing-braces -D WARMING=1000 -I $header_file";
my $bench_nb_run = 300000;
my $ua_flags = '-gen-bench -arch avx -unroll -inline-all';
my $res_dir = "$FindBin::Bin/perf_bench_res";
my $ref_files_dir = "$FindBin::Bin/perf_ref_files";
my $ref_file = "$FindBin::Bin/perfs.json";
my %ciphers = (
    # 'AES-bs'       => { archs   => [ 'std', 'avx' ],
    #                     source  => 'aes.ua',
    #                     ua_opts => '-B' },
    'AES-bs'              => [ 'aes.ua',                '-B' ],
    'AES-hs'              => [ 'aes_mslice.ua',         '-H' ],
    'AES-vs'              => [ 'aes_generic.ua',        '-V' ],
    'ACE-vs-inter'        => [ 'ace.ua',                '-V', '-interleave 2' ],
    'ACE-vs'              => [ 'ace.ua',                '-V' ],
    'ACE-bs'              => [ 'ace_bitslice.ua',       '-B' ],
    'Ascon-vs-inter'      => [ 'ascon.ua',              '-V', '-interleave 2' ],
    'Ascon-vs'            => [ 'ascon.ua',              '-V' ],
    'Ascon-bs'            => [ 'ascon.ua',              '-B' ],
    'Clyde-vs-inter'      => [ 'clyde.ua',              '-V', '-interleave 2' ],
    'Clyde-vs'            => [ 'clyde.ua',              '-V' ],
    'Clyde-bs'            => [ 'clyde_bitslice.ua',     '-B' ],
    'DES'                 => [ 'des.ua',                '-B' ],
    'Chacha20'            => [ 'chacha20.ua',           '-V' ],
    'Gift-vs'             => [ 'gift.ua',               '-V' ],
    'Gift-bs'             => [ 'gift_bitslice.ua',      '-B' ],
    'Gimli-vs'            => [ 'gimli.ua',              '-V' ],
    'Gimli-bs'            => [ 'gimli_bitslice.ua',     '-B -unroll -inline-all' ],
    'Photon-bs'           => [ 'photon_bitslice.ua',    '-B', '-no-sched' ],
    'Present'             => [ 'present.ua',            '-B' ],
    'Pyjamask-vs'         => [ 'pyjamask_vslice.ua',    '-V' ],
    'Pyjamask-bs'         => [ 'pyjamask_bitslice.ua',  '-B' ],
    'Rectangle-vs'        => [ 'rectangle.ua',          '-V' ],
    'Rectangle-vs-inter'  => [ 'rectangle.ua',          '-V', '-interleave 2' ],
    'Rectangle-hs'        => [ 'rectangle.ua',          '-H' ],
    'Rectangle-hs-inter'  => [ 'rectangle.ua',          '-H', '-interleave 2' ],
    'Rectangle-bs'        => [ 'rectangle_bitslice.ua', '-B' ],
    'Serpent'             => [ 'serpent.ua',            '-V' ],
    'Serpent-inter'       => [ 'serpent.ua',            '-V', '-interleave 2' ],
    'Skinny-bs'           => [ 'skinny_bitslice.ua',    '-B' ],
    'Spongent'            => [ 'spongent.ua',           '-B' ],
    'Subterranean'        => [ 'subterranean.ua',       '-B' ],
    'Xoodoo-bs'           => [ 'xoodoo.ua',             '-B' ],
    'Xoodoo-vs'           => [ 'xoodoo.ua',             '-V' ],
    );
my $nb_run = 35;


if ($set_ref) {
    $make    = 1;
    $gen     = 1;
    $compile = 0;
    $run     = 0;
    $quick   = 0;
}

if ($quick) {
  #  Benchmark only core set of algorithms
    %ciphers = (
        'AES-bs'              => [ 'aes.ua',                '-B' ],
        'AES-hs'              => [ 'aes_mslice.ua',         '-H' ],
        'AES-vs'              => [ 'aes_generic.ua',        '-V' ],
        'ACE-vs-inter'        => [ 'ace.ua',                '-V', '-interleave 2' ],
        'Ascon-vs-inter'      => [ 'ascon.ua',              '-V', '-interleave 2' ],
        'Gimli-bs'            => [ 'gimli_bitslice.ua',     '-B -unroll -inline-all' ],
        'Photon-bs'           => [ 'photon_bitslice.ua',    '-B', '-no-sched' ],
        'Rectangle-hs-inter'  => [ 'rectangle.ua',          '-H', '-interleave 2' ]
        );
}

my $pm = Parallel::ForkManager->new($thread_count);

make()    if $make;
gen()     if $gen;
compile() if $compile;
run()     if $run;
set_ref() if $set_ref;

sub avg_stdev {
    my $u = sum(@_) / @_; # mean
    my $s = (sum(map {($_-$u)**2} @_) / @_) ** 0.5; # stdev
    return ($u, $s);
}

sub make {
    chdir $usuba_dir;

    say "-----------------------------------------------------------------------";
    say "------------------------- Recompiling Usuba   -------------------------";
    say "-----------------------------------------------------------------------";
    die if system "./configure --datadir $bench_dir/examples/data --nodeps --tightprove \"\"";
    die if system 'eval $(opam env) && make';
    chdir $bench_dir;
    die if system "ln -sf $usuba_dir/usubac usubac";
    say "\n";
}

sub gen {
    chdir $bench_dir;
    remove_tree $work_dir if -d $work_dir;
    make_path $work_dir;

    say "-----------------------------------------------------------------------";
    say "-------------------- Compiling from Usuba to C ------------------------";
    say "-----------------------------------------------------------------------";
    for my $cipher (sort keys %ciphers) {
        #say "\t- $cipher....";
        $pm->start and next;
        my ($ua_file, @opts) = @{$ciphers{$cipher}};
        system "./usubac $ua_flags -o $work_dir/$cipher.c @opts $ua_source_dir/$ua_file";
        $pm->finish;
    }
    $pm->wait_all_children;
    say "\n";
}

sub set_ref {
    remove_tree $ref_files_dir if -d $ref_files_dir;
    dircopy $work_dir, $ref_files_dir;
    say "Set C files as new reference.\n";
}

sub compile {
    for (['old', $ref_files_dir], ['new', $work_dir]) {
        my ($name, $dir) = @$_;
        chdir $dir;
        say "-----------------------------------------------------------------------";
        say "----------------------- Compiling $name C files -------------------------";
        say "-----------------------------------------------------------------------";
        for my $cipher (sort keys %ciphers) {
            #say "\t- $cipher....";
            $pm->start and next;
            my $this_nb_run = (grep { $_ eq '-B' } @{$ciphers{$cipher}}) ?
                $bench_nb_run / 20 : $bench_nb_run;
            if (-f "$dir/$cipher.c") {
                system "$cc $cflags -D NB_RUN=$this_nb_run $bench_main $dir/$cipher.c -o $dir/$cipher";
                print "$dir/$cipher";
            }
            $pm->finish;
        }
        $pm->wait_all_children;
        say "\n";
    }
}


sub run {
    say "-----------------------------------------------------------------------";
    say "---------------------------- Benchmarking -----------------------------";
    say "-----------------------------------------------------------------------";

    my %times;
    for (1 .. $nb_run) {
        for my $cipher (sort keys %ciphers) {
            print "\r\033[2K\t- $cipher ($_ / $nb_run)";
            chdir $ref_files_dir;
            if (-f $cipher) {
                push @{$times{$cipher}->{old}->{raw}}, 0+(`./$cipher` =~ s/^\d+(\.\d+)?\K.*\n?//r);
            }
            chdir $work_dir;
            if (-f $cipher) {
                push @{$times{$cipher}->{new}->{raw}}, 0+(`./$cipher` =~ s/^\d+(\.\d+)?\K.*\n?//r);
            }
        }
    }
    say "\r\033[2KBenchmarking done.";


    say "Computing statistics...\n";
    chdir $FindBin::Bin;
    make_path $res_dir unless -d $res_dir;
    my $res_file = $res_dir . "/" . strftime("%F-%T", localtime time) . ".txt";
    open my $FH, '>', $res_file;

    my $longest_str_cipher = max map { length } keys %times;


    say join "-+-", ("-" x ($longest_str_cipher)), map { "-" x 8 } 1 .. 3;
    printf "%*s | %8s | %8s | %8s\n", $longest_str_cipher, 'cipher', 'diff', 'new', 'old';
    say join "-+-", ("-" x ($longest_str_cipher)), map { "-" x 8 } 1 .. 3;

    for my $cipher (sort keys %ciphers) {

        if (! $times{$cipher}{new}{raw}) {
            printf "%*s |   Something went wrong; skipping\n", $longest_str_cipher, $cipher;
        }

        # Removing faster/slower measures
        @{$times{$cipher}{new}{raw}} =
            (sort { $a <=> $b } @{$times{$cipher}{new}{raw}})[2 .. $nb_run - 3];
        my ($new_mean, $new_stdev) = avg_stdev(@{$times{$cipher}{new}{raw}});

        if ($times{$cipher}{old}{raw}) {
            # Removing faster/slower measures
            @{$times{$cipher}{old}{raw}} =
                (sort { $a <=> $b } @{$times{$cipher}{old}{raw}})[2 .. $nb_run - 3];

            my ($old_mean, $old_stdev) = avg_stdev(@{$times{$cipher}{old}{raw}});
            my $wilcox = Statistics::Test::WilcoxonRankSum->new();
            $wilcox->load_data($times{$cipher}->{new}->{raw}, $times{$cipher}->{old}->{raw});
            my $prob = $wilcox->probability();

            my $perf = sprintf "%.2f", $new_mean / $old_mean;

            my $color = $prob > 0.05 ? 'yellow' :
                $perf > 1 ? 'red' : 'green';

            printf "%*s | %s%8s%s | %8s | %8s\n", $longest_str_cipher, $cipher,
                color($color), "x$perf", color('reset'),
                sprintf("%.2f", $new_mean),
                sprintf("%.2f", $old_mean);
            printf $FH "%*s | %8s | %8s | %8s\n", $longest_str_cipher, $cipher,
                "x$perf", sprintf("%.2f", $new_mean), sprintf("%.2f", $old_mean);
        } else {
            # Old cipher does not exist
            printf "%*s | %8s | %8s | %8s\n", $longest_str_cipher, $cipher,
                "new",
                sprintf("%.2f", $new_mean),
                "-";
            printf $FH "%*s | %8s | %8s | %8s\n", $longest_str_cipher, $cipher,
                "new", sprintf("%.2f", $new_mean), "-";
        }
    }
    close $FH;
    copy $res_file, "$res_dir/latest.txt";
}

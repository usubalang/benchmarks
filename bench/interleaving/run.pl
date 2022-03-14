#!/usr/bin/perl

=usage

    ./compile.pl [-g] [-c] [-r]

To compile and run, `./compile.pl` (or `./compile.pl -c -r`).
To generate the C files from Usuba, `./compile.pl -g`. (not by default)
To compile only, `./compile.pl -c`.
To run only, `./compile.pl -r`

=cut

use strict;
use warnings;
no warnings qw( numeric );
use v5.14;

use Cwd;
use File::Path qw( remove_tree make_path );
use File::Copy;
use FindBin;

my $bench_dir     = "$FindBin::Bin/../..";
my $ua_source_dir = "$bench_dir/examples/samples/usuba";
my $usuba_dir     = "$bench_dir/../usuba";
my $header_file   = "$usuba_dir/arch";

my $NB_LOOP = 10;
my $CC      = 'clang';
my $CFLAGS  = '-Wall -Wextra -O3 -march=native -fno-slp-vectorize -fno-vectorize';
my $INC     = "-I $header_file";
$| = 1;


my %ciphers_slow = (
    des        => 0,
    serpent    => 1,
    rectangle  => 1,
    aes        => 0,
    aes_kasper => 0,
    chacha20   => 1,
    ascon      => 1,
    ace        => 1,
    clyde      => 1,
    gift       => 1,
    pyjamask   => 1,
    xoodoo     => 1,
    gimli      => 1
    );

# my %ciphers_fast = (
#     des        => 0,
#     serpent    => 1,
#     rectangle  => 1,
#     aes        => 0,
#     aes_kasper => 0,
#     chacha20   => 1,
#     ascon      => 1,
#     ace        => 0,
#     clyde      => 1,
#     gift       => 0,
#     pyjamask   => 0,
#     xoodoo     => 1,
#     gimli      => 1
#     );

my %ciphers_fast = (
    des        => 0,
    serpent    => 0,
    rectangle  => 0,
    aes        => 0,
    aes_kasper => 0,
    chacha20   => 0,
    ascon      => 1,
    ace        => 0,
    clyde      => 0,
    gift       => 0,
    pyjamask   => 0,
    xoodoo     => 0,
    gimli      => 0
    );

my $gen     = !@ARGV || "@ARGV" =~ /-g/;
my $make    = !@ARGV || "@ARGV" =~ /-m/;
my $compile = !@ARGV || "@ARGV" =~ /-c/;
my $run     = !@ARGV || "@ARGV" =~ /-r/;
my $speed   = !@ARGV || "@ARGV" =~ /-s/;

my %ciphers;

if ($speed) {
    say "benchmarking only fast ciphers";
    %ciphers = %ciphers_fast;
} else {
    say "benchmarking almost all ciphers (slower)";
    %ciphers = %ciphers_slow
};

my @ciphers = grep { $ciphers{$_} } keys %ciphers;

my $pwd = "$FindBin::Bin";


if ($make) {
    chdir $usuba_dir;

    say "-----------------------------------------------------------------------";
    say "------------------------- Recompiling Usuba   -------------------------";
    say "-----------------------------------------------------------------------";
    die if system 'pwd';
    die if system 'eval $(opam env)';
    die if system 'make';
    chdir $bench_dir;
    say "ln -sf $usuba_dir/usubac usubac";
    die if system "ln -sf $usuba_dir/usubac usubac";
    say "\n";
}

if ($gen) {
    print "Compiling Usuba sources...";

    my $out_dir = "$pwd/generated/ciphers";
    make_path $out_dir unless -d $out_dir;

    my $ua_args = "-V -arch std -gen-bench";

    for my $cipher (@ciphers) {
        my $source  = "$ua_source_dir/$cipher.ua";
        system "./usubac $ua_args                -o $out_dir/${cipher}.c       $source";
        system "./usubac $ua_args -interleave 10 -o $out_dir/${cipher}-inter.c $source";
    }

    say " done.";
}

if ($compile) {
    print "Compiling C sources...";
    chdir "$FindBin::Bin";

    my $out_dir = "$pwd/generated/bin";
    make_path $out_dir unless -d $out_dir;

    my $cipher_dir = "$pwd/generated/ciphers";
    for my $cipher (@ciphers) {
        system "$CC $CFLAGS $INC bench.c $cipher_dir/$cipher.c       -o $out_dir/$cipher";
        system "$CC $CFLAGS $INC bench.c $cipher_dir/$cipher-inter.c -o $out_dir/$cipher-inter";
    }
    say " done.";
}

exit unless $run;

chdir $pwd;
make_path "results" unless -d "results";

my %formatted;
for my $cipher (@ciphers) {

    my $bin_dir = "$pwd/generated/bin";
    next unless -e "$bin_dir/$cipher";

    my %res;
    for ( 1 .. $NB_LOOP ) {
        print "\rRunning benchs $cipher... $_/$NB_LOOP";

        for my $bin ("$bin_dir/$cipher", "$bin_dir/$cipher-inter") {
            my $cycles = sprintf "%03.02f", `$bin`;
            push @{ $res{$bin}->{details} }, $cycles;
            $res{$bin}->{total} += $cycles;
        }
    }
    say "\rRunning benchs $cipher... done.     ";

    open my $FP_OUT, '>', "results/$cipher.txt";
    say "Results $cipher:";
    for my $bin (sort { $res{$a}->{total} <=> $res{$b}->{total} } keys %res) {
        my $size = -s $bin;
        my $name = $bin =~ s{$bin_dir/}{}r;
        printf "%20s : %03.02f  [ %s ]  {$size bytes}\n", $name, $res{$bin}->{total} / $NB_LOOP,
            (join ", ", @{$res{$bin}->{details}});
        printf $FP_OUT "%s %.02f $size\n", $name, $res{$bin}->{total} / $NB_LOOP;
    }
    say "";

    my $bin_nointer = "$bin_dir/$cipher";
    my $bin_inter   = "$bin_dir/$cipher-inter";
    my $speedup      = ($res{$bin_nointer}->{total} - $res{$bin_inter}->{total})
        / $res{$bin_nointer}->{total} * 100;
    my $size  = ((-s $bin_inter) - (-s $bin_nointer)) / (-s $bin_inter) * 100;
    $formatted{$cipher}->{speedup} = $speedup;
    $formatted{$cipher}->{size}    = $size;
    $formatted{$cipher}->{sign}    = $size >= 0 ? "+" : "";
}


open my $FP_OUT, '>', 'results/interleaving.tex';
for my $cipher (@ciphers) {
    printf $FP_OUT
"\\newcommand{\\Interleaving${cipher}Speedup}{%.02f}
\\newcommand{\\Interleaving${cipher}Code}{%.02f}

",
    $formatted{$cipher}->{speedup}, $formatted{$cipher}->{size};
}

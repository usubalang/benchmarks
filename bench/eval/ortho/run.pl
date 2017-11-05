#!/usr/bin/perl

use strict; use warnings;
use v5.18;
use Cwd;
use File::Path qw( remove_tree make_path );
use File::Copy;
use FindBin;

my $nb_run = 30;
my $cc = 'clang';

my $bench   = "orthogonalization";
my $outfile = 'perf-ortho.tex';

sub talk {
    say "Bench $bench: ", @_;
}


my %benchs = (
    'std.c' => 'GP-64',
    'sse.c' => 'SSE-128',
    'avx.c' => 'AVX-256'
    );

chdir $FindBin::Bin;

make_path 'tmp';
copy $_, 'tmp' for keys %benchs;
chdir 'tmp';

copy "../../../input.txt", ".";

my $cflags = "-O3 -I ../../../../arch -march=native -w";

talk "Compiling the C files";
for my $file (keys %benchs) {
    system "$cc $cflags $file -o $benchs{$file}";
}

talk "Running the benchmarks";
my %times;
for (1 .. $nb_run) {
    for my $file (values %benchs) {
        $times{$file} += `./$file` / $nb_run;
    }
}

# Fixing the throughput values
for my $name (keys %times) {
    $times{$name} = sprintf "%d", $times{$name};
}

# Printing the results
chdir "..";
open my $FH, '>', $outfile or die $!;

print $FH 
"\\begin{table}[h]
  \\begin{tabular}{|K{2.5cm}|K{2.5cm}|K{2.5cm}|}
    \\hline
    \\textbf{GP (64-bits)} & \\textbf{SSE (128-bits)} & \\textbf{AVX (256-bits)}\\\\
    \\hline
    $times{'GP-64'} & $times{'SSE-128'} & $times{'AVX-256'} \\\\
    \\hline
  \\end{tabular}
  \\caption{Comparison of the orthogonalization speed (MiB/s)}
  \\label{tbl:perf-ortho}
\\end{table}";

close $FH;

# Cleaning temporary directory
remove_tree "tmp";


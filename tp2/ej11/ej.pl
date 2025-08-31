use strict;
use warnings;

#ej de sistema de tipos dinamico y debil
my $x = 10;
my $y = "20";
my $suma = $x + $y; #convierte y en el num 20
my $concat = $x . $y; #concatena 10 y "20"
print "Suma: $suma\n";
print "Concat: $concat\n";

#ej de scope/alcance
my $var = 5;

sub ejemplo{
  my $var = 10; #var local
  print "En subrutina var = $var\n"; #10
}

ejemplo();
print "Fuera de subrutina, var = $var\n"; #5

#se compila con perl archivo

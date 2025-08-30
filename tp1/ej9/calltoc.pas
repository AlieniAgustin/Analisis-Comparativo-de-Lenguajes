Program CallToC;
Var x:integer; external name 'y';
Procedure inc_x; external name 'inc_y';
{$L libmylib.a}
begin { programa principal }
x := 1;
inc_x;
writeln('x=',x)
end.

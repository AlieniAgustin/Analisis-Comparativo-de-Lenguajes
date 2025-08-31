Program Ej;
Var x: integer;

Function F(a: integer): integer;
begin
  F := x * a;
end;

Procedure P(y: integer);
var x: integer;
    z: boolean;
begin
  x := 1;
  z := (y mod 2 = 0);
  if z then
    x := F(y+1)
  else
    x := F(y);
  WriteLn('valor de x en P ', x);
  {Con alcance estatico es 6, con dinamico es 3}
  WriteLn('valor de y en P ', y);
  {Con alcance tanto estatico como dinamico es 2}
  WriteLn('valor de z en P ', z);
  {Con alcance tanto estatico y dinamico es true}
  {Pascal tiene un alcance estatico}
end;

begin { main }
  x := 2;
  P(x);
end.

program Ej;

procedure SwapCopia(a:integer; b:integer); 
begin
  a := a+b;
  b := a-b;
  a := a-b;
end;

procedure SwapReferencia(var a:integer;var b:integer); 
begin
  a := a+b;
  b := a-b;
  a := a-b;
end;

procedure SwapReferenciaCopia(var a:integer;b:integer); 
begin
  a := a+b;
  b := a-b;
  a := a-b;
end;

var
  a,b,c,d,e,f: integer;

begin
  a := 1;
  b := 2;
  SwapCopia(a,b);
  WriteLn(a);
  Writeln(b);

  c := 1;
  d := 2;
  SwapReferencia(c,d);
  WriteLn(c);
  Writeln(d);

  e := 1;
  f := 2;
  SwapReferenciaCopia(e,f);
  WriteLn(e);
  WriteLn(f);

end.

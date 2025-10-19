Program P;
Var a:integer;
Procedure P2(e:Char; Var f:integer; g:integer);
  Function fun(c:char; a:integer):integer;
  begin
    fun := ord(c) + a
  end;
  begin
    f := f + 1;
    g:= fun(e,f);
    writeln(g) {*}
  end;
Procedure P1(b:integer);
  Var c:Char;
  begin
    c := chr(b);
    P2(c,b,a)
  end;
begin
  a := 64;
  P1(a);
end.

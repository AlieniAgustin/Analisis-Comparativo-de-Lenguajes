Program P;
Var g:boolean;
  Function f2(Var b:boolean; y:integer):integer;
  begin
    if b then f2 := y + 1 else f2 := y - 1;
    b := not b;
  end;
  Procedure p1;
    Var x:integer;
    Function f1(y:integer):integer;
    begin
      f1 := y + f2(g,y);
    end;
  begin {p1 body}
    x := 1;
    x := f1(x); {*}
    WriteLn(x);
  end; {p1}
begin
  g := True;
  p1();
  WriteLn(g);
end.

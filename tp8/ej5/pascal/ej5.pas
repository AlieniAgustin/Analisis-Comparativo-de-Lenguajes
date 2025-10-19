Program Ej;
Var
    p,q : ^integer;

begin
    new(p);
    new(q);
    p^ := 100;
    q^ := 1;
    p := q;
    Writeln('Valor que esta guardado en la celda de memoria apuntada por p:', p^);
    Writeln('Valor que esta guardado en la celda de memoria apuntada por q:', q^);
    //Writeln('Celda de memoria apuntada por p:', p);
    //Writeln('Celda de memoria apuntada por q:', q);
end.
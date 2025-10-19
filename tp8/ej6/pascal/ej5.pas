Program Ej;
Var
    p: ^integer;

begin
    new(p);
    p^ := 100;
    Writeln('Valor que esta guardado en la celda de memoria apuntada por p:', p^);
    Writeln('REFERENCIA COLGADA!!');
    dispose(p);
    Writeln('Valor que esta guardado en la celda de memoria apuntada por p:', p^);
end.
program Ej;

Type DiaSemana = (Dom, Lun, Mar, Mie, Jue, Vie, Sab);
var s: Set of DiaSemana;
var b: Integer absolute s;

begin
  s := [Dom];
  Writeln(b); //1
  s := [Lun];
  Writeln(b); //2
  s := [Mar];
  Writeln(b); //4
  s := [Mie];
  Writeln(b); //8
  s := [Lun, Mar];
  Writeln(b); //6
end.

Program Ejplus;

Type DiaSemana = (Dom, Lun, Mar, Mie, Jue, Vie, Sab, Ocho, Nueve);
var s: Set of DiaSemana;
var b: Byte absolute s;

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
  s := [Ocho];
  Writeln(b); //128
  s := [Nueve];
  Writeln(b); //overflow
end.

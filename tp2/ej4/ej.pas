{ejemplo de programa que compila pero que tiene error de tipos en tiempo
 de ejecucion. El error ocurre cuando el input es un string, o algun valor
 que no sea entero}
Program Ej;
Var x : Integer;
begin
  WriteLn('Enter a number: ');
  ReadLn(x);
  WriteLn(x);
end.

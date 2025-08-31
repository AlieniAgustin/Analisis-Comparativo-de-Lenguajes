Program Ej;
Var 
  x,y : Integer;
  nums : array[1..5] of Integer;
  

begin
  x := 1 div 0;
  {Pascal aqui rompe el principio de completitud, ya que el div no esta definido 
  cuando su segundo parametro es cero}
  WriteLn(x);

  nums[-1] := 3;
  {Pascal aqui rompe el principio de completitud, ya que la operacion de indexar en 
  arreglos solo esta definida para enteros que pertenezcan al rango definido en Var}
  WriteLn(nums[-1]);
  
  y := succ(MaxInt);
  {Pascal aqui rompe el principio de completitud, ya que la operacion succ que retorna 
  el sucesor del entero pasado como parametro, no funciona cuando el mismo es MaxInt}
  WriteLn(y);
end.

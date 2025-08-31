#include<stdio.h>

/*
* ejemplo de programa en c que no compila por un error de tipos 
* (intento sumar un float con un registro), aunque en tiempo 
* de ejecucion nunca se produciria ese error (porque jamas entraria al else)
*/

struct Producto{
  int id;
  float precio;
};
struct Producto p1;
float x;

int main(){
  p1.id = 1;
  p1.precio = 1.2;
  if(2 > 0){
    printf("%d\n",p1.id);
  }else{
    x = 2.0 + p1;
    printf("%f\n",x);
  }
  return 0;
}

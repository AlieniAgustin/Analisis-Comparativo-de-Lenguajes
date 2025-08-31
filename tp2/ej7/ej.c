#include <stdio.h>

int a[10];
int x;

int main(){
  a[0] = 2;
  a[9] = 5;
  x = a[13];
  printf("%d\n",x);
  /**
    * Este es un ejemplo de que C no tiene un sistema de tipos seguro.
    * Me permite hacer x = a[13] aunque este utilizando un indice fuera de rango.
    * El compilador no marca error al compilar.
    * En ejecucion puedo obtener basura, pisar la memoria de otra variable,
    * o crashear con segmentation fault
    *
    */
  return 0;
}

#include <stdio.h>

struct Punto{
  int x;
  int y;
};

struct Coordenada{
  int x;
  int y;
};

struct Punto p1,p2;
struct Coordenada c;

int main(){
  p1.x = 1;
  p1.y = 2;
  p2 = p1;
  c = p1;
  /**
   * ejemplo que demuestra que c tiene una equivalencia de tipos por nombre,
   * no importa si dos tipos tienen la misma estructura, solo seran equivalentes
   * si tienen el mismo nombre. Es por ello que a una coordenada (c) no le puedo 
   * asignar un punto (p1), pese a que Punto y Coordenada tengan la misma estructura
   */
  return 0;
}

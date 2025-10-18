#include<stdio.h>
#include<stdlib.h>

int *p, *q;


void main(){
    p = (int *) malloc (sizeof(int));
    *p = 100;
    q = (int *) malloc (sizeof(int));
    *q = 1;
    p = q;
    printf("Valor que esta guardado en la celda de memoria apuntada por p: %d\n", *p);
    printf("Valor que esta guardado en la celda de memoria apuntada por q: %d\n", *q);
    printf("La celda de memoria apuntada por p: %d\n", p);
    printf("La celda de memoria apuntada por q: %d\n", q);
}

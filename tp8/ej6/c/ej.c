#include<stdio.h>
#include<stdlib.h>

int *p;


void main(){
    p = (int *) malloc (sizeof(int));
    *p = 100;
    printf("Valor que esta guardado en la celda de memoria apuntada por p: %d\n", *p);
    printf("La celda de memoria apuntada por p: %d\n", p);
    printf("REFERENCIA COLGADA!\n");
    free(p);
    printf("Valor que esta guardado en la celda de memoria apuntada por p: %d\n", *p);
    printf("La celda de memoria apuntada por p: %d\n", p);
}
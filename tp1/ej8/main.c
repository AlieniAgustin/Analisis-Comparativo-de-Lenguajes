#include <stdio.h>

//declaracion de la funcion que esta en la biblioteca
void inc_y(void);

//declaracion de la variable global
extern int y;

int main(void)
{
y = 1;
inc_y();
printf("y = %d\n",y);
return 0;
}

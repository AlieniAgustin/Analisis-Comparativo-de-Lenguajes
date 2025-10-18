#include<stdio.h>

void swapCopia(int a, int b){
  int temp = a;
  a = b;
  b = temp;
}

void swapReferencia(int *a, int *b){
  int temp = (*a);
  (*a) = (*b);
  (*b) = temp;
}

int main(){
  int a = 1;
  int b = 2;
  swapCopia(a,b);
  printf("%d\n",a);
  printf("%d\n",b);

  int c = 1;
  int d = 2;
  swapReferencia(&c,&d);
  printf("%d\n",c);
  printf("%d\n",d);
  return 0;
}


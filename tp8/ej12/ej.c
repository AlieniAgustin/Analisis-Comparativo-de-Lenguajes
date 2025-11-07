#include<stdio.h>

int n,m;
int factorial(int n){
  if(n == 0){return 1;}
  else{return n * factorial(n-1);}
}

void main(){
  n = 3;
  m = factorial(n);
}

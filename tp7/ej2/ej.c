#include<stdio.h>

int n;

int getDivisors(int n, int divisors[]);
int getSumArrayElements(int validElementsCount, int divisors[]);
int isPerfectNumber(int n);

int main(){

  printf("Enter a number: ");
  scanf("%d",&n);

  if(isPerfectNumber(n)){
    printf("%d is a perfect number! \n",n);
  }else{
    printf("%d isn't a perfect number! \n",n);
  }

  return 0;
}

int getDivisors(int n, int divisors[]){

  if(n <= 0){
    printf("Error!\n");
    return 0;
  }

  int index = 0;

  for(int i = 1; i <= n/2; i++){
    if(n % i == 0){
      divisors[index] = i;
      index++;
    }
  }

  return index; //the divisors count
}

int getSumArrayElements(int validElementsCount, int divisors[]){

  int sum = 0;

  for(int i = 0; i < validElementsCount; i++){
    int e = divisors[i];
    sum += e;
  }
  return sum;
}

int isPerfectNumber(int n){

  int divisorsCount, sumArrayElements;
  int divisors[100];

  if(n <= 0){
    printf("Error!\n");
    return 0;
  }else{
    divisorsCount = getDivisors(n,divisors);
    sumArrayElements = getSumArrayElements(divisorsCount,divisors);
    if(n == (sumArrayElements - n)){
      return 1;
    }else{
      return 0;
    }
  }
}


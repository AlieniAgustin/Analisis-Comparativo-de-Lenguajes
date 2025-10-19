#include<stdio.h>

long n;

int getDigits(long n, long digits[]);
int getDigitCount(long n);
int getMathAbs(long n);
int isPalindrome(long n);

int main(){

  printf("Enter a number: ");
  scanf("%ld",&n);
 
  if(isPalindrome(n)){
    printf("%ld is a palindrome!\n",n);
  }else{
    printf("%ld isn't a palindrome!\n",n);
  }

  return 0;
}

int getDigitCount(long n){
  
  int digitCount = 0;

  if(n == 0){
    return 1;
  }else if(n < 0){
    n = -n;
  }

  while(n > 0){
    n /= 10;
    digitCount++;
  }

  return digitCount;
}

int getDigits(long n, long digits[]){

  n = getMathAbs(n);
  int digitCount = getDigitCount(n);
  int index = digitCount - 1;
  long dividend = n;

  for(int i = 0; i < digitCount; i++){
    digits[index] = dividend % 10;
    index--;
    dividend /= 10;
  }

  return digitCount;
}

int getMathAbs(long n){
  if(n < 0){
    return -n;
  }
  return n;
}

int isPalindrome(long n){

  int digitCount;
  long digits[100];
  digitCount = getDigits(n,digits); 

  for(int i = 0; i < digitCount / 2; i++){
    if(digits[i] != digits[digitCount - 1 - i]){
      return 0;
    }
  }
  return 1;
}


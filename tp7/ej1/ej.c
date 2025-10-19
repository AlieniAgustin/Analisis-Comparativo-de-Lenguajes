#include<stdio.h>

char c;
int hasError;
float n1, n2, answer;

int main(){
  hasError = 0;
  answer = 0;
  printf("Enter a char: ");
  scanf("%c",&c);
  printf("Enter a number: ");
  scanf("%f",&n1);
  printf("Enter a number: ");
  scanf("%f",&n2);

  switch(c){
    case '+':
      answer = n1 + n2;
      break;
    case '-':
      answer = n1 - n2;
      break;
    case '*':
      answer = n1 * n2;
      break;
    case '/':
      if(n2 == 0){
        hasError = 1;
      }
      
      if(!hasError){
        answer = n1 / n2;
      }
      break;
    default:
      hasError = 1;
      break;
  }

  if(hasError){
    printf("Error!\n");
  }else{
    printf("The answer is %f \n",answer);
  }

  return 0;
}

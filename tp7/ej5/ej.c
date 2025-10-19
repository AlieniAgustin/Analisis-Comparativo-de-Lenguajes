#include<stdio.h>

int matrix[100][100];
int numberOfRows, numberOfColumns;
int *p;

void loadMatrix(int numberOfRows, int numberOfColumns, int matrix[numberOfRows][numberOfColumns]);
int * getMaxRowPointer(int numberOfRows, int numberOfColumns, int matrix[numberOfRows][numberOfColumns]);

int main(){

  printf("Enter the number of rows: ");
  scanf("%d",&numberOfRows);
  printf("Enter the number of columns: ");
  scanf("%d",&numberOfColumns);

  loadMatrix(numberOfRows,numberOfColumns,matrix);

  p = getMaxRowPointer(numberOfRows,numberOfColumns,matrix);

  printf("Max row: \n");
  for(int j = 0; j < numberOfRows; j++){
    printf("%d",p[j]);
    if(j < numberOfRows - 1){
      printf(" - ");
    }
  }
  printf("\n");

  return 0;
}

void loadMatrix(int numberOfRows, int numberOfColumns, int matrix[numberOfRows][numberOfColumns]){

  int e;

  for(int i = 0; i < numberOfRows; i++){
    for(int j = 0; j < numberOfColumns; j++){
      printf("Enter a number (row %d, column %d): ",i,j);
      scanf("%d",&e);
      matrix[i][j] = e;
    }
  }
}

int * getMaxRowPointer(int numberOfRows, int numberOfColumns, int matrix[numberOfRows][numberOfColumns]){

  int *p;
  int maxRowSum = -9999999;
  int tempRowSum;

  for(int i = 0; i < numberOfRows; i ++){
    tempRowSum = 0;
    for(int j = 0; j < numberOfColumns; j++){
      tempRowSum += matrix[i][j];
    }
    if(tempRowSum > maxRowSum){
      maxRowSum = tempRowSum;
      p = matrix[i];
    }
  }

  return p;

}


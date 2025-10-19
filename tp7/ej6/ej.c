#include<stdio.h>

int matrix[100][100];
int array[100];
int *matrixPtr;
int *arrayPtr;
int numberOfRows, numberOfColumns;

void loadMatrix(int numberOfRows, int numberOfColumns, int matrix[numberOfRows][numberOfColumns]);
void loadSums(int numberOfRows, int numberOfColumns, int* matrix, int* array);

int main(){

  printf("Enter the number of rows: ");
  scanf("%d",&numberOfRows);
  printf("Enter the number of columns: ");
  scanf("%d",&numberOfColumns);

  loadMatrix(numberOfRows,numberOfColumns,matrix);

  matrixPtr = matrix;
  arrayPtr = array;
  loadSums(numberOfRows,numberOfColumns,matrixPtr,arrayPtr);

  for(int i = 0; i < numberOfRows; i++){
    printf("%d\n",arrayPtr[i]);
  }

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

void loadSums(int numberOfRows, int numberOfColumns, int* matrix, int* array){
  int tempSum;

  for(int i = 0; i < numberOfRows; i++){
    tempSum = 0;
    for(int j = 0; j < numberOfColumns; j ++){
      int e = *(matrix + i * numberOfColumns + j);
      tempSum += e;
    }
    array[i] = tempSum;
  }

}

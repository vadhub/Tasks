#include <stdio.h>
#include <stdlib.h>

int main()
{
// *** Variables ***

int** array;
int i,j;
int RowCount,ColCount;

// *** Program code ***

// Input size of array
printf("Enter count of row: ");
scanf("%d",&RowCount);
printf("Enter count of col: ");
scanf("%d",&ColCount);

// Print entered size
printf("Array size: %dx%d\n",RowCount,ColCount);

// Create array of int* - allocate memory
array= (int **)malloc(sizeof(int*)*RowCount);

// for every pointer to int
for (i=0;i<RowCount;i++){
  // Allocate memory for array line of integers
  array[i]=(int *)malloc(sizeof(int)*ColCount);
  // Get array numbers
  for(j=0;j<ColCount;j++){
    printf("Enter Array [%d,%d]: ",i,j);
    // Enter all the integers in array
    scanf("%d",&array[i][j]);
  };
};

for (i=0;i<RowCount;i++){
  for(j=0;j<ColCount;j++){
      if(j==0&&i==0){
            array[i][j] =(int)((array[i][j+1]+array[i+1][j])/2);
      }else if(j>0&&j!=ColCount&&i==0){
            array[i][j] = (int)((array[i-1][j]+array[i+1][j]+array[i][j+1])/3);
      }else if(j==ColCount&&i==0){
           array[i][j] = (int)((array[i-1][j]+array[i][j+1])/2);
      }else if(j>0&&i>0&&j!=ColCount&&i!=RowCount){
            array[i][j] = (int)((array[i-1][j]+array[i][j+1]+array[i][j+1]+array[i][j-1])/4);
      }else if(j==0&&i==RowCount){
            array[i][j] = (int)((array[i+1][j]+array[i][j-1])/2);
      }else if(j==0&&i>0&&i!=RowCount){
            array[i][j] = (int)((array[i+1][j]+array[i-1][j])/2);
      }else if(j>0&&i==RowCount&&j!=ColCount){
            array[i][j] = (int)((array[i][j+1]+array[i][j-1])/2);
      }else if(j==ColCount&&i==RowCount){
            array[i][j] = (int)((array[i][j-1]+array[i-1][j])/2);
      }
  };
  printf("\n");
};

for (i=0;i<RowCount;i++){
  for(j=0;j<ColCount;j++){
    // Print out the integers from array
    printf("%d\t",array[i][j]);
  };
  printf("\n");
};

// Free memory

for (i=0;i<RowCount;i++){
  // Clear memory used by lines
  array[i]=(int *)realloc(array[i],0);
};

// Clear memory user by pointer to integer pointers
array=(int **)realloc(array,0);
    return 0;
}

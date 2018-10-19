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

for(i = 0;i<RowCount;i++){
    for(j=0;j<ColCount;j++){
        printf("%d\t", array[i][j]);
    }
    printf("\n");
}

printf("%d", summ_elements_array(array, RowCount, ColCount));
    return 0;
}

int summ_elements_array(int** array, int row, int col){
    int i, j, n;
    int numElements = col*row;
    for(i=0;i<row;i++){
            for(j=0;j<col;j++){
               n+=array[i][j];
            }
    }
    return n;
}

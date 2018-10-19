#include <stdio.h>
#include <stdlib.h>

int main()
{

int** array;
int i,j, result = 0;
int RowCount,ColCount;


printf("Enter count of row: ");
scanf("%d",&RowCount);
printf("Enter count of col: ");
scanf("%d",&ColCount);

printf("Array size: %dx%d\n",RowCount,ColCount);

array= (int **)malloc(sizeof(int*)*RowCount);

for (i=0;i<RowCount;i++){
  array[i]=(int *)malloc(sizeof(int)*ColCount);

  for(j=0;j<ColCount;j++){

    printf("Enter Array [%d,%d]: ",i,j);
    scanf("%d",&array[i][j]);
  };
};

print_(array, RowCount, ColCount);

result = summ_elements_array(array,RowCount,ColCount);
printf("%d", result);

for (i=0;i<RowCount;i++){
  //Clear memory used by lines
  array[i]=(int *)realloc(array[i],0);
};

//Clear memory
array=(int **)realloc(array,0);

    return 0;
}
//sum all elements array
int summ_elements_array(int** array, int row, int col){
    int i, j, n = 0;
    int* arr;


    for(i=0;i<row;i++){
            for(j=0;j<col;j++){
               n=n+array[i][j];
            }
    }
    return n;
}
//print array
void print_(int** array, int row, int col){
    int i, j;
    for(i = 0;i<row;i++){
    for(j=0;j<col;j++){
        printf("%d\t", array[i][j]);
    }
   printf("\n");
}
}

//sum all elements of diagonal array
int summ_elements_array_2(int** array, int row, int col){
    int i, j, n = 0;
    int* arr;


    for(i=0;i<row;i++){
            for(j=i+1;j<col;j++){
               n=n+array[i][j];
            }
    }
    return n;
}

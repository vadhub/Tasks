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


for (i=0;i<RowCount;i++){
  //Clear memory used by lines
  array[i]=(int *)realloc(array[i],0);
};

//Clear memory
array=(int **)realloc(array,0);

    return 0;
}
//sum all elements array
void summ_elements_array(int** array, int size){
    int i, j, n;
    srand(time(0));
    array = (int **)malloc(size*sizeof(int*));
    for(i=0;i<size;i++){
        array[i] = (int*)malloc(size*sizeof(int));
        for(j=0;j<size;j++){
             array[i][j] = rand()%10;
        }
    }
    int x;
    for(i=0;i<size-1;i++){
        for(j=0;j<size-1;j++){
            x=array[i][j];
            array[i][j]=array[size-j+1][size-i+1];
            array[size-j+1][size-i+1]=x;
        }
    }



    for (i=0;i<RowCount;i++){
    //Clear memory used by lines
        array[i]=(int *)realloc(array[i],0);
    };

    //Clear memory
    array=(int **)realloc(array,0);
     /*for(i=0;i<size;i++){
        for(j=0;j<size;j++){
               n=n+array[i][j];
        }
    }*/
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

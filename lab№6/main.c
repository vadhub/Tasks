#include <stdio.h>
#include <stdlib.h>

int main()
{
//variables

int** array;
int** array2;
int i,j;
int RowCount,ColCount;

//input size of array
printf("Enter count of row: ");
scanf("%d",&RowCount);
printf("Enter count of col: ");
scanf("%d",&ColCount);

//print entered size
printf("Array size: %dx%d\n",RowCount,ColCount);

//create arrays of int
array= (int **)malloc(sizeof(int*)*RowCount);
array2= (int **)malloc(sizeof(int*)*RowCount);

//for cycles
for (i=0;i<RowCount;i++){
  //for line
  array[i]=(int *)malloc(sizeof(int)*ColCount);
  //get array numbers
  for(j=0;j<ColCount;j++){
    printf("Enter Array [%d,%d]: ",i,j);
    //enter all the integers in array
    scanf("%d",&array[i][j]);
  };
};

for (i=0;i<RowCount;i++){
     array2[i]=(int *)malloc(sizeof(int)*ColCount);
  for(j=0;j<ColCount;j++){
        //for square array
  if(RowCount==2&&ColCount==2){
            if(i==0&&j==0){
            /*
                10
                0
            */
            array2[i][j] = (int)(array[i][j]+array[i][j+1]+array[i+1][j])/3;
            }else if(i==0&&j<=ColCount){
            /*
                01
                 0
            */
            array2[i][j] = (int)(array[i][j]+array[i][j-1]+array[i+1][j])/3;
            }else if(i<=RowCount&&j==0){
            /*
                0
                10
            */
            array2[i][j] = (int)(array[i][j]+array[i-1][j]+array[i][j+1])/3;
            }else if(i<=RowCount&&j<=ColCount){
            /*
                 0
                01
            */
            array2[i][j] = (int)(array[i][j]+array[i-1][j]+array[i][j-1])/3;
            }
        }else if(RowCount>2&&ColCount>2){
            if(i==0&&j==0){
                /*
                    10
                    0
                */
                array2[i][j] = (array[i][j]+array[i+1][j]+array[i][j+1])/3;
            }else if(i==0&&j>0&&j!=(ColCount-1)){
                /*
                    010
                     0
                */
                array2[i][j] = (array[i][j]+array[i][j-1]+array[i][j+1]+array[i+1][j])/4;
            }else if(i>0&&j>0&&i!=(RowCount-1)&&j!=(ColCount-1)){
                /*
                     0
                    010
                     0
                */
                array2[i][j] = (array[i][j]+array[i][j-1]+array[i-1][j]+array[i][j+1]+array[i+1][j])/5;
            }else if(i>0&&j==0&&i!=(RowCount-1)){
                /*
                    0
                    10
                    0
                */
                array2[i][j] = (array[i][j]+array[i+1][j]+array[i-1][j]+array[i][j+1])/4;
            }else if(i==0&&j<=ColCount){
                /*
                    01
                     0

                */
                array2[i][j] = (array[i][j]+array[i][j-1]+array[i+1][j])/3;
            }else if(i<=RowCount&&j==0){
                /*
                    0
                    10
                */
                array2[i][j] = (array[i][j]+array[i-1][j]+array[i][j+1])/3;
            }else if(i<=RowCount&&j>0&&j!=(ColCount-1)){
                /*
                     0
                    010
                */
                array2[i][j] = (array[i][j]+array[i-1][j]+array[i][j+1]+array[i][j-1])/4;
            }else if(i<=RowCount&&j<=ColCount){
                /*
                      0
                     01
                */
                array2[i][j] = (array[i][j]+array[i-1][j]+array[i][j-1])/3;
            }else if(i<=RowCount&&j<=ColCount){
                /*
                      0
                     01
                      0
                */
                array2[i][j] = (int)((array[i][j]+array[i-1][j]+array[i][j-1]+array[i+1][j])/4);
        }
    }
  };
};

for (i=0;i<RowCount;i++){
  for(j=0;j<ColCount;j++){
    // Print out the integers from array
    printf("%d\t",array2[i][j]);
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

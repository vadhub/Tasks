#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int** arr1;
    int n, m;
    int j;
    int i;
    printf("enter row: ");
    scanf("%d",&n);

    printf("enter col: ");
    scanf("%d",&m);

    /*arr1 = (int **)malloc(sizeof(int*)*n);
    for(i=0; i<n;i++){
         arr1[i] = (int*)malloc(sizeof(int)*m);

        for(j=0;j<m;j++){
          arr1[i][j] = rand()%10;
        }
    }
    */
    f(arr1, n, m);
    //print_(arr1, n, m);


for (i=0;i<n;i++){
  arr1[i]=(int *)realloc(arr1[i],0);
};

arr1=(int **)realloc(arr1,0);

    return 0;
}

//print array
void print_(int** arr, int row, int col){
    int i, j;
    for(i = 0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d\t", arr[i][j]);
    }
   printf("\n");
    }
}
//create a new two-array
void f(int** arr, int n, int m){
    int i, j;
    srand(time(0));
    arr = (int **)malloc(n*sizeof(int*));
    for(i=0;i<n;i++){
        arr[i] = (int*)malloc(m*sizeof(int));
        for(j=0;j<m;j++){
             arr[i][j] = rand()%10;
        }
    }
    print_(arr, n,m);
}

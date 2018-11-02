#include <stdio.h>
#include <stdlib.h>

int main()
{

int** array;
int i,j;
int size;

printf("Enter size of matric: ");
scanf("%d",&size);

summ_elements_array(array, size);
    return 0;
}
//sum all elements array
void summ_elements_array(int** array, int size){
    int i, j, n = 0;
    srand(time(0));
    array = (int **)malloc(size*sizeof(int*));
    for(i=0;i<size;i++){
        array[i] = (int*)malloc(size*sizeof(int));
        for(j=0;j<size;j++){
             array[i][j] = rand()%10;
        }
    }
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            array[i][j]=array[j][i];
        }
    }

    print_(array,size);

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            n=n+array[i][j];
        }
    }

    printf("sum elements = %d", n);


    for (i=0;i<size;i++){
    //Clear memory used by lines
        array[i]=(int *)realloc(array[i],0);
    };

    //Clear memory
    array=(int **)realloc(array,0);
     for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            n=n+array[i][j];
        }
    }
}
//print array
void print_(int** array, int size){
    int i, j;
    for(i = 0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
}

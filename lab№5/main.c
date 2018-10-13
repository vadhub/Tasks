#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , i, nElements = 1, dopN;
    int *array;
    printf("enter to size of array\n");
    scanf("%d", &n);
    array = (int*)malloc(n*sizeof(int));
    dopN = 1;
    printf("enter elements\n");
    for(i = 0; i<n; i++){
          scanf("%d", &array[i]);
    }
    for(i = 1; i<n; i++){

        if(array[i]>array[i-1]){
            nElements = nElements+1;
        }else{
          nElements=1;
        }
        if(nElements>=dopN){
            dopN = nElements;
        }

    }
    printf("max size set: %d\n", dopN);
    free(array);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array;
    int i,j,n,m;

    printf("Enter size of rows: ");
    scanf("%d",&n);

    printf("Enter size of cols: ");
    scanf("%d",&m);

    array = (int*)malloc(n*m * sizeof(int));
    for(i = 0;i<n;i++){
        for(j = 0;j<m;j++){
           printf("array[%d][%d] = ", i, j);
           scanf("%d", (array + i*m + j));
        }
    }

    for(i = 0;i<n;i++){
        for(j = 0;j<m;j++){
            if(i==0&&j==0){
                array[i*m+j] = (int)(array[i*m+j]+array[(i+1)*m+j]+array[i*m+(j+1)])/3;
            }else if(i<=n&&j==0){
                array[i*m+j] = (int)(array[(i-1)*m+j]+array[i*m+(j+1)]+array[(i+1)*m+j])/3;
            else if(i<n&&j<m){
                array[i*m+j] = (int)(array[(i-1)*m+j]+array[i*m+(j+1)]+array[(i+1)*m+j]+array[(i+1)*m+j]+array[(i+1)*m+j])/5;
            }else if(i==n&&j==m){
                array[i*m+j] = (int)(array[i*m+j]+array[(i+1)*m+j]+array[i*m+(j+1)])/3;
            }
        }
    }
}

    for(i = 0;i<n;i++){
        for(j = 0;j<m;j++){
            printf("%d \t", *(array + i*m + j));
        }
        printf("\n");
    }
    free(array);
    return 0;
}

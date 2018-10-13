#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5];
    int i;
    int max = 0;
    printf("Enter numbers: \n");
   for(i = 0; i<5; i++){
        scanf("%d", &array[i]);
        if(abs(array[i])>abs(max)){
            max = array[i];
        }
    }
    printf("max at module = %d", max);
    return 0;
}

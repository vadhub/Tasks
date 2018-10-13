#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, s;
    scanf("%f",&x);
    double k = 0;

    while(pow(2,k)<x){
        k++;
    }
    printf("k = %f\n",k);
    return 0;
}

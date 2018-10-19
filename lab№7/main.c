#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("enter first number: ");
    scanf("%d", &a);
    printf("enter second number: ");
    scanf("%d", &b);

    printf("nok = %d",nok(a,b));
    return 0;
}

int nok(int a, int b){
    int nok_;
    int multi_ = a*b;
    while(a!=b){
        if(a>b){
            a = a-b;
        }else{
            b = b-a;
        }
    }
    nok_ = multi_/b;
    return nok_;
}

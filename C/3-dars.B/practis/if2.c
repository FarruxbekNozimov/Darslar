#include <stdio.h>

int main()
{
    int a;
    printf("Son kiriting >> ");
    scanf("%d", &a);

    if (a>0){
        printf("%d ", a+1);
    }else{
        printf("%d", a-2);
    }


    return 0;
}
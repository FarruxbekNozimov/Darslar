#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    printf("Son kiriting >> ");
    scanf("%d", &a);

    if (a>0){
        printf("%d ", a+1);
    }else{
        printf("%d", a);
    }


    return 0;
}
#include <stdio.h>

int main()
{
    int a,big;
    printf("6 xonali son kiriting >> ");
    scanf("%d", &a);
    
    big = -1;
    while (a > 0){
        if (a % 10 > big){
            big = a % 10;
        }
        a/=10;
    }
    printf("Eng kattasi >> %d",big);


    return 0;
}
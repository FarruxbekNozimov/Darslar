#include <stdio.h>

int main()
{
    int a,b,number,c;

    printf("2 xonali son kiriting : ");
    scanf("%d", &number);
    
    a = number/10;
    b = number%10;

    printf("%d%d\n", b,a);


    return 0;
}
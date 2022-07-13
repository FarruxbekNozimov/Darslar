#include <stdio.h>

int main()
{
    int a,b,c,d,son;

    printf("4 xonali son kiriting : ");
    scanf("%d", &son);
    
    a = son/1000;
    b = son/100%10;
    c = son/10%10;
    d = son%10;

    printf("Birliklar : %d\n", a);
    printf("O'nliklar : %d\n", b);
    printf("Yuzliklar : %d\n", c);
    printf("Mingliklar : %d\n", d);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int a,b,c,d,son;

    printf("3 xonali son kiriting : ");
    scanf("%d", &son);
    
    a = son/100;
    b = son/10%10;
    c = son%10;

    printf("Teskarisi : %d%d%d\n", b,c,a);
    return 0;
}
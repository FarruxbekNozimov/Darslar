#include <stdio.h>
#include <math.h>

int main()
{
    int son,a,b,c;
    printf("3 xonali kiriting >> ");
    scanf("%d", &son);
    
    a = son/100;
    b = son/10%10;
    c = son%10;

    printf("Raqamlari yig'indisi : %d", a+b+c);    


    return 0;
}
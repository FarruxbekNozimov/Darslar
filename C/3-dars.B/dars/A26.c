#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,p;
    float natija;
    printf("a tomonni kiriting >> ");
    scanf("%d", &a);
    printf("b tomonni kiriting >> ");
    scanf("%d", &b);
    printf("c tomonni kiriting >> ");
    scanf("%d", &c);
    p = (a+b+c)/2;
    natija = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%f\n", natija);
    return 0;
}
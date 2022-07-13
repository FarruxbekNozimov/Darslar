#include <stdio.h>
#include <math.h>

int main()
{
    int a,b;
    float c;
    printf("a tomonni kiriting >> ");
    scanf("%d", &a);
    printf("b tomonni kiriting >> ");
    scanf("%d", &b);
    c = sqrt(pow(a,2)+pow(b,2));
    printf("c tomon = %f", c);


    return 0;
}
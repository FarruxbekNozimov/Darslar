#include <stdio.h>
#include <math.h>

int main()
{
    int r;
    const float p = 3.14;
    printf("Radius kiriting >> ");
    scanf("%d", &r);

    printf("%f", 4/3.0*p*pow(r,3));


    return 0;
}
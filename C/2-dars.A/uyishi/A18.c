#include <stdio.h>

int main()
{
    //V=p*r^2h
    int r,h;
    const float PI = 3.14;

    printf("Radiusi : ");
    scanf("%d", &r);
    printf("Balandligi : ");
    scanf("%d", &h);
    printf("Silindr hajmi : %.2f", PI*r*r*h);

    return 0;
}
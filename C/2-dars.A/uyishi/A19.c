#include <stdio.h>

int main()
{
    // S = 2*p*r^2+2*p*r*h
    int h,r;
    const float PI = 3.14;

    printf("Radiusi : ");
    scanf("%d", &r);
    printf("Balandligi: ");
    scanf("%d", &h);

    float S = 2*PI*r*r+2*PI*r*h;
    printf("Silindr tashqi yuzasi : %.3f", S);

    return 0;
}
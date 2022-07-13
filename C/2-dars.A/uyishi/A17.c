#include <stdio.h>

int main()
{
    int a,b,c;
    a = 3;
    b = 4;
    c = a;
    a = b;
    b = c;
    printf("a = %d b = %d\n", a, b);

    return 0;
}
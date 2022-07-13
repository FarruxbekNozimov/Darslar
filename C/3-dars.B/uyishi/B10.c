#include <stdio.h>
#include <math.h>

int main()
{
    int sekund,a,b;
    printf("Sekundni kiriting >> ");
    scanf("%d", &sekund);
    
    a = sekund/60;
    b = sekund%60;
    printf("%d minut %d sekund",a, b);    


    return 0;
}
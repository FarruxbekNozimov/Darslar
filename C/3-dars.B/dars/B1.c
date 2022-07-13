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
    
    if (a+b >=c || c+a >= b || c+b >=a){
        printf("Bunday uchburchak mavjud");
    }else{
        printf("Bunday uchburchak yoq");
    }
    


    return 0;
}
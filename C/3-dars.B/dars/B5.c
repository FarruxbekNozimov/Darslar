#include <stdio.h>
#include <math.h>

int main()
{
    int a,b;
    float natija;
    printf("1-sonni kiriting >> ");
    scanf("%d", &a);
    printf("2-sonni kiriting >> ");
    scanf("%d", &b);
    
    if (a>b){
        printf("1-son katta");
    }else if(b>a){
        printf("2-son katta");
    }else{
        printf("Sonlar teng");
    }
    


    return 0;
}
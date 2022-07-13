#include <stdio.h>

int main(){
    int a,b,c,son;
    
    
    printf("3 xonali son kiriting : ");
    scanf("%d", &son);
   
    a = son/100;
    b = son/10%10;
    c = son%10;

    printf("100 lar xonasi : %d\n", a);
    printf("10 lar xonasi : %d\n", b);
    printf("1 lar xonasi : %d\n", c);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){ 

    int a,b,c;
    printf("A kiriting >> ");
    scanf("%d", &a);
    printf("B kiriting >> ");
    scanf("%d", &b);

    if (a>b){
        c = a;
        a = b;
        b = c;
    }
    printf("A=%d B=%d", a, b);   



}
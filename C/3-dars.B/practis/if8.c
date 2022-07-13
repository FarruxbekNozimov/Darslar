#include <stdio.h>
#include <stdlib.h>

int main(){

    int a,b;
    printf("1-Son kiriting >> ");
    scanf("%d", &a);
    printf("2-Son kiriting >> ");
    scanf("%d", &b);

    if (a>b){
        printf("%d %d", a, b);
    }else{
        printf("%d %d", b, a);
    }



}
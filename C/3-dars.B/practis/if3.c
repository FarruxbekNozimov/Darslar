#include <stdio.h>

int main(){
    int a;

    printf("Son kiriting >> ");
    scanf("%d", &a);

    if (a>0){
        printf("%d ", a+1);
    }else if(a<0){
        printf("%d", a-2);
    }else{
        a = 10;
        printf("%d", a);
    }

    return 0;
}
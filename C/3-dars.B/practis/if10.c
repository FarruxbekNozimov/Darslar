#include <stdio.h>
#include <stdlib.h>

int main(){ 
    system("cls");
    int a,b,c;
    printf("A kiriting >> ");
    scanf("%d", &a);
    printf("B kiriting >> ");
    scanf("%d", &b);

    if(a!=b){
        c = a+b;
        b = a = c;
    }else{
       b = a = 0;
    }
    printf("A=%d B=%d", a, b);


}
#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int a,b,c;
    printf("A kiriting >> ");
    scanf("%d", &a);
    printf("B kiriting >> ");
    scanf("%d", &b);
    printf("C kiriting >> ");
    scanf("%d", &b);
    int x;
    if (a<b && a<c){
        x = a;
    }else if (b<a && b<c){
        x = b;
    }else if (c<a && c<b){
        x = c;
    }
    printf("Eng kichkinasi %d", x);

    

}
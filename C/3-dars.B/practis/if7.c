#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");

    int a,b;

    printf("1-Son kiriting >> ");
    scanf("%d", &a);
    printf("2-Son kiriting >> ");
    scanf("%d", &b);

    if (a<b){
        printf("1-son kichkina >> %d", a);
    }else{
        printf("2-son kichkina >> %d", b);
    }

    return 0;

}

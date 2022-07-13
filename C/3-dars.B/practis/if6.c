#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int a,b;
    
    printf("1-Son kiriting >> ");
    scanf("%d", &a);
    printf("2-Son kiriting >> ");
    scanf("%d", &b);

    if (a>b){
        printf("%d", a);
    }else{
        printf("%d", b);
    }    

    return 0;

}
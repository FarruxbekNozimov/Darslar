#include <stdio.h>

int main(){

    //Foydalanuvchi butun son kiritadi. Shu sonning juft yoki toqligini ekranga chiqaring

    int a;

    printf("Sonni kiriting >> ");
    scanf("%d",a);

    switch (a%2){
        case 0:
            printf("Juft son");
            break;
        default:
            printf("Toq son");
    }
    return 0;
}
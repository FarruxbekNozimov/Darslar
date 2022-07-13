#include <stdio.h>

int main(){
    //Foydalanuvchi nomanfiy son kiritadi. 
    //Shu sonning (chapdan) 1chi raqamini ekranga chiqaring.

    int son;
    printf("Son kiriting: ");
    scanf("%d", &son);

    do {
        son /= 10;
    } while (son >= 10);

    printf("%d", son);

    return 0;
}
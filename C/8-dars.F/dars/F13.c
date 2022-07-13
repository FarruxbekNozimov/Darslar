#include <stdio.h>

int main(){

    //Foydalanuvchi natural son kiritadi. 
    //Shu son uchun karra jadvalini ekranga chiqaring.

    int karra;
    scanf("%d", &karra);

    for (int i = 1; i <= 10; i++){
        printf("%d * %d = %d\n", karra, i, karra*i);
    }

    return 0;
}
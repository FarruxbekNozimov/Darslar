#include <stdio.h>

int main(){

    //Foydalanuvchi butun son kiritadi (musbat ham manfiy ham bo'lishi mumkin). 
    //Shu son nechta raqamdan tashkil topganligini ekranga chiqaring

    int son,sum = 0;
    scanf("%d", &son);

    for (int i = son; i != 0; i/=10){
        sum++;
    }
    printf("%d", sum);

    return 0;
}
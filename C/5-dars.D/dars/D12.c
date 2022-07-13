#include <stdio.h>

int main(){

    //Foydalanuvchi butun son kiritadi (musbat ham manfiy ham bo'lishi mumkin). 
    //Shu son nechta raqamdan tashkil topganligini ekranga chiqaring


    int n;
    int count = 0;
    printf("Son kiriting: ");
    scanf("%d", &n);
    
    while (n != 0){
        n /= 10;
        ++count;
    }

    printf(">>> %d", count);

    return 0;
}
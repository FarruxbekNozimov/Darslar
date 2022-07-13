#include <stdio.h>

int main(){

    //Foydalanuvchi nomanfiy son kiritadi. 
    //Shu sonning (chapdan) 1chi raqamini ekranga chiqaring.

    int num,oxirgi;
    scanf("%d", &num); //922457

    for (int i = num; i != 0; i/=10){
        oxirgi = i;
    }
    printf("%d", oxirgi);

    return 0;
}
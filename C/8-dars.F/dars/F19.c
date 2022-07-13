#include <stdio.h>

int main(){

    //Foydalanuvchi kiritgan harfni alfavitdagi aksini toping

    char harf;
    scanf("%c", &harf);

    if ('a' <= harf && harf <= 'z'){
        printf("%c", 'z' - (harf - 'a'));
    }else if ('A' <= harf && harf <= 'Z'){
        printf("%c", 'Z' - (harf - 'A'));
    }else{
        printf("Bu harf yo'q");
    }
}
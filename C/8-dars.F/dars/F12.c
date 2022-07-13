#include <stdio.h>

int main(){

    //Foydalanuvchi nomanfiy son kiritadi. 
    //Shu sonning raqamlari yig'indisini toping.

    int nom,sum = 0;
    scanf("%d", &nom);

    for (int i = nom; i != 0; i/=10){
        sum += i%10;
    }
    printf("%d", sum);

    return 0;
}
#include <stdio.h>

int main(){
    //Foydalanuvchi nomanfiy son kiritadi. 
    //Shu sonning raqamlari yig'indisini toping.

    int n,schot;

    printf("Son kiriting: ");
    scanf("%d", &n);

    do {
        schot += n % 10;
        n /= 10;
    } while (n != 0);

    printf(">>> %d", schot);

    return 0;
}
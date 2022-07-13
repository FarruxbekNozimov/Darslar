#include <stdio.h>

int main() {

    int n, birlik;
    //Foydalanuvchi natural son kiritadi. Shu sonning birinchi va oxirgi 
    //raqamlari ni taqqoslab kattasini ekranga chiqaring.

    printf("Son kiriting: ");
    scanf("%d", &n);
    int a = n;
    while (n >= 10) {
        n /= 10;
        a %= 10;
    }
    if (a>n)
        printf("%d",a);
    else 
        printf("%d",n);

    


    return 0;
}
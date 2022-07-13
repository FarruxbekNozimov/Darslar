#include <stdio.h>

int main() {

    int a,b,c;
    //Foydalanuvchi a (butun son) va b (natural son) sonlarni kiritadi. 
    //(a-b) dan (a+b) gacha bo'lgan barcha sonlarni ekranga chiqaring.i va oxirgi 
    //raqamlari ni taqqoslab kattasini ekranga chiqaring.

    printf("Son kiriting: ");
    scanf("%d %d", &a, &b);
    c = a-b;
    while (c <= a+b) {
        printf("%d ",c);
        c++;
    }
    return 0;
}
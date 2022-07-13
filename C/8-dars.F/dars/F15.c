#include <stdio.h>

int main(){

    //Foydalanuvchi a (butun son) va b (natural son) sonlarni kiritadi. 
    //(a-b) dan (a+b) gacha bo'lgan barcha sonlarni ekranga chiqaring.

    int a,b;
    scanf("%d %d", &a, &b);

    for (int i = a-b; i <= a+b; i++){
        printf("%d ", i);
    }
}
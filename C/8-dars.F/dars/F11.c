#include <stdio.h>

int main(){

    //Foydalanuvchi a va b sonlarning kiritadi (b har doim a dan katta kiritiladi).
    // a dan b gacha bo'lgan sonlar yig'indisini toping

    int a,b,sum = 0;
    scanf("%d %d", &a, &b);

    for (int i = b; i >= a; i--){
        sum += i;
    }
    printf("%d", sum);

    return 0;
}
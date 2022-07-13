#include <stdio.h>

int main() {

    //Foydalanuvchi n natural son kiritadi. 1 dan n gacha 
    //bo'lgan sonlarning ko'paytmasini toping (ya'ni n! ni toping)
    //Eslatma —>       4! = 1 * 2 * 3 * 4
    int a,son=1,kopaytma=1;

    // printf("Son kiriting: ");
    scanf("%d", &a);

    while (son <= a) {
        kopaytma *= son;
        son++;
    }
    printf("%d", kopaytma);

    return 0;
}
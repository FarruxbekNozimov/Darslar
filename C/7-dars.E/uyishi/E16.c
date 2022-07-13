#include <stdio.h>

int main() {
    //Foydalanuvchi butun son kiritadi (manfiy ham bo'lishi mumkin). 
    //Shu sonni teskari tartibda o'ziga o'zlashtiring.
    int n, teskari = 0, son;

    printf("Sonni kiriting: ");
    scanf("%d", &n);

    do {
        son = n % 10;
        teskari = teskari * 10 + son;  
        n /= 10;
    }while (n != 0);

    printf(">>> %d", teskari);

    return 0;
}
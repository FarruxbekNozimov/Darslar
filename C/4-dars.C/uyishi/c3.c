#include <stdio.h>

int main(){

    int kun;
    printf("Kun raqamini kiriting: ");
    scanf("%d", &kun);

    switch (kun) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Ish kuni\n");
            break;
        case 6:
        case 7:
            printf("Dam olish kuni\n");
            break;
        default:
            printf("Bunday kun yo'q\n");
            break;
    }
    return 0;

}
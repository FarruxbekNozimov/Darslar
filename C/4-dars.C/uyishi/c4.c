#include <stdio.h>

int main(){

    //Oy raqami berilgan. kIritilgan oy qaysi faslga tegishli ekanini chiqaruvchi dastur tuzing.

    int a;

    printf("Oy raqamini kiriting: ");
    scanf("%d", &a);

    switch (a){
        case 12:
        case 1:
        case 2:
            printf("Qish\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("Bahor\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("Yoz\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("Kuz\n");
            break;
        default:
            printf("Bunday oy yo'q\n");
            break;
    }
    return 0;
}
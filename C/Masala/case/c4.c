#include <stdio.h>

int main(){

    //Oy raqami berilgan. Shu oyda nechta kun borligini aniqlovchi dastur tuzing.

    int a;

    printf("Oy raqamini kiriting: ");
    scanf("%d", &a);    

    switch (a){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 kun\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 kun\n");
            break;
        case 2:
            printf("28 kun\n");
            break;
        default:
            printf("Bunday oy yo'q\n");
            break;
    }




}
#include <stdio.h>

int main(){

    //1-7 gacha butun son beriladi. Kiritilgan songa mos ravishda 
    //hafta kunlarini so'zda ifodalovchi dastur tuzing
    int a;
   
    printf("Son kiriting: ");
    scanf("%d", &a);

    switch (a){
        case 1:
            printf("Dushanba\n");
            break;
        case 2:
            printf("Seshanba\n");
            break;
        case 3:
            printf("Chorshanba\n");
            break;
        case 4:
            printf("Payshanba\n");
            break;
        case 5:
            printf("Juma\n");
            break;
        case 6:
            printf("Shanba\n");
            break;
        case 7:
            printf("Yakshanba\n");
            break;
        
        default:
            printf("Bunday kun yo'q\n");
            break;
    }


}
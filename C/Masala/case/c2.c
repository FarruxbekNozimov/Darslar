#include <stdio.h>

int main(){

    //K butun son beriladi. Baho natijalarini chiqaruvchi dastur tuzing . (1-yomon, 2-qoninqarsiz...)
    //Agar son bu oraliqqa tegishli bo'lmasa "Xato" deb chiqsin.

    int a;
    printf("Son kiriting: ");
    scanf("%d", &a);

    switch (a){
        case 1:
            printf("Yomon\n");
            break;
        case 2:
            printf("Qoniqarsiz\n");
            break;
        case 3:
            printf("Qoniqarli\n");
            break;
        case 4:
            printf("Yaxshi\n");
            break;
        case 5:
            printf("A'lo\n");
            break;   
        default:
            printf("Bunday baho yo'q\n");
            break;
    }

    return 0;
}
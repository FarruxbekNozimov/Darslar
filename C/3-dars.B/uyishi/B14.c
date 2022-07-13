#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int num;
    printf("Son kiriting : ");
    scanf("%d", &num);
    
    if (num == 1){
        printf("Dushanba\n");
    }else if (num == 2){
        printf("Seshanba\n");
    }else if (num == 3){
        printf("Chorshanba\n");
    }else if (num == 4){
        printf("Payshanba\n");
    }else if (num == 5){
        printf("Juma\n");
    }else if (num == 6){
        printf("Shanba\n");
    }else if (num == 7){
        printf("Yakshanba\n");
    }else{
        printf("Bunday hafta kuni yo'q\n");
    }
}

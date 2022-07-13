#include <stdio.h>

int main(){

    //Foydalanuvchi oy tartib sonini kiritadi. Siz esa shu oyda necha kun borligini toping

    int son;

    printf("Oy tartib sonini kiriting: ");
    scanf("%d",&son);

    if (son==1 || son ==3 || son == 5 || son == 7 || son == 8 || son == 10 || son == 12){
        printf("31 kun");
    }else if (son==4 || son == 6 || son == 9 || son == 11){
        printf("30 kun");
    }else if (son==2){
        printf("28 kun");
    }else{
        printf("Chegaradan oshdingiz!");
    }

    

    



}
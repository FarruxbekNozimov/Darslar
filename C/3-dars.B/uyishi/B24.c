#include <stdio.h>

int main(){

    //Foydalanuvchi uchburchakning 3 ta ichki burchaklarini kiritadi. 
    //Shu burchaklarga qarab, bunday uchburchak mavju yoki yo'qlini ayting

    int a,b,c,j;

    printf("Burchaklarni kiriting: ");
    scanf("%d %d %d",&a,&b,&c);

    j = a+b+c;
    if (j == 180){
        printf("Bunday uchburchak mavjud");
    }else{
        printf("Bunday uchburchak yo'q");
    }
    



}
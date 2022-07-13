#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    system("cls");
    srand(time(NULL));

    //Foydalanuvchi o'ylagan sonni computer topishi kerak

    int past = 1,tepa = 100;
    // int r =  past + rand() % (tepa - past);
    int taxminlar = 0,taxmin,a = 1;   
    char javob;
    printf("Son o'ylang(1-100).Katta(+),Kichkina(-),To'g'ri javob(t)\n");

    while (a){
        taxminlar +=1;
        if (past != tepa){
            taxmin = past + rand() % (tepa - past);
        }else{
            taxmin = past;
        }
        printf("Siz %d sonini o'yladingiz >> ",taxmin);
        scanf(" %c", &javob);

        if (javob == 't'){
            a = 0;
        }else if (javob == '-'){
            tepa = taxmin - 1;
        }else if(javob == '+'){
            past = taxmin - 1;
        }
    }
    printf("Men %d ta taxmin bilan topdim",taxminlar); 

}
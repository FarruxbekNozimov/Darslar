#include <stdio.h>

int main(){
    //Foydalanuvchi a va b sonlarni kiritadi,
    // a dan b gacha sonlar orasida joylashgan toq sonlarni ekranga chiqaring

    int a=20;

    while (a < 420){
        if (a % 5 == 0 && a%10 !=0){
            printf("%d",a);
        }
        a++;
    }

        

    return 0;

}
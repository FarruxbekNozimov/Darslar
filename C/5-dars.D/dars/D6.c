#include <stdio.h>

int main(){
    //Foydalanuvchi a va b sonlarni kiritadi,
    // a dan b gacha sonlar orasida joylashgan toq sonlarni ekranga chiqaring

    int a,b;
    scanf("%d %d",&a, &b);

    if (a>b){
        while (a>b){
            if (a%2==1){
                printf("%d",a);
            }
            a++;
        }
    }else if (a<b){
        while (a<b){
            if (a%2==1){
                printf("%d",a);
            }
            a++;
        }
    }
        

    return 0;

}
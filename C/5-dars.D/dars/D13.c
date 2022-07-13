#include <stdio.h>

int main(){
    
    //Foydalanuvchi a va b sonlarning kiritadi (b har doim a dan katta kiritiladi). 
    //a dan b gacha bo'lgan sonlar yig'indisini toping

    int b,a;
    int count = 0;
    scanf("%d %d", &a,&b);
    

    while (a <= b){
        count += a;
        a++;
    }
    printf("%d",count); 

    return 0;

}
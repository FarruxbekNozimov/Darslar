#include <stdio.h>

int main(){

    //Foydalanuvchi butun son kiritadi (manfiy ham bo'lishi mumkin). 
    //Shu sonni teskari tartibda o'ziga o'zlashtiring.

    int son,teskari = 0;
    scanf("%d", &son);

    for (int i = son; i != 0; i/=10){
        teskari = teskari * 10 + i % 10;
    }
    printf("%d", teskari);
    
}
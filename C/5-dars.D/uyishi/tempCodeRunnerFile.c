#include <stdio.h>


int main(){
    int n, i;
    //Foydalanuvchi natural son kiritadi. Shu son uchun karra jadvalini ekranga chiqaring.
    printf("Son kiriting >> ");
    scanf("%d",&n);
    i=1;
    while(i<=10){
        printf("%d * %d = %d \n", n, i, n*i);
        ++i;
    }
     
    
}
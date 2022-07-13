#include <stdio.h>

int main(){
    //Foydalanuvchi natural son kiritadi. 
    //Shu son uchun karra jadvalini ekranga chiqaring.

    int son,i=1;
    printf("Son kiriting: ");
    scanf("%d", &son);

    do{
        printf("%d * %d = %d\n", son, i, son*i);
        i++;
    }while (i<=son);

    return 0;
}
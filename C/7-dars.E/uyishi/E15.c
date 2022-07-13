#include <stdio.h>

int main(){
    //Foydalanuvchi n natural son kiritadi. 
    //1 dan n gacha bo'lgan sonlarning ko'paytmasini toping (ya'ni n! ni toping)

    int son,i=1,n=1;
    printf("Son kiriting: ");
    scanf("%d", &son);

    do {
        n = n*i;
        i++;
    } while (i < son);

    printf("%d", n);

    return 0;
}
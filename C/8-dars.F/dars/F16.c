#include <stdio.h>

int main(){

    //Foydalanuvchi n natural son kiritadi. 
    //1 dan n gacha bo'lgan sonlarning ko'paytmasini toping (ya'ni n! ni toping)

    int son,sum=1;
    scanf("%d", &son);

    for (int i = 1; i <= son; i++){
        sum *= i;
    }
    printf("%d", sum);
}
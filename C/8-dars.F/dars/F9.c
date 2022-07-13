#include <stdio.h>

int main(){
    //Foydalanuvchi n natural son kiritadi. 
    //1 dan n ga cha bo'lgan sonlar yig'indisin toping

    int son,sum = 0;
    scanf("%d", &son);
    
    for (int i = 1; i <= son; i++){
        sum += i;
    }
    printf("%d", sum);
}
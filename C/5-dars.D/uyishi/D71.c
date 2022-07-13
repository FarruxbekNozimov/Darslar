#include <stdio.h>

int main(){

    int son=40;

    while (son < 180){
        if (son % 7 == 0){
            printf("%d",son);
        }
    son++;
    }
    
    return 0;

}
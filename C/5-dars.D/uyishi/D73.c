#include <stdio.h>

int main(){

    int son=50;

    while (son < 440){
        if (son % 11 == 0){
            printf("%d",son);
        }
    son++;
    }
    
    return 0;

}
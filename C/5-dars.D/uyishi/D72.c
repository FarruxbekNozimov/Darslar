#include <stdio.h>

int main(){

    int son=90;

    while (son < 225){
        if (son % 25 == 0){
            printf("%d",son);
        }
    son++;
    }
    
    return 0;

}
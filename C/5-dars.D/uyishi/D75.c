#include <stdio.h>

int main(){

    int son=1;

    while (son < 4000){
        if (son % 11 == 0 && son % 3 == 0 && son % 9 == 0){
            printf("%d",son);
        }
    son++;
    }
    
    return 0;

}
#include <stdio.h>

int main(){

    int son=25;

    while (son < 690){
        if (son % 5 == 0 && son % 9 == 0){
            printf("%d",son);
        }
    son++;
    }
    
    return 0;

}
#include <stdio.h>

int main(){

    int son = 50;

    do{
        if (son % 2 == 0){
            printf("%d ", son);
        }
        son++;
    } while (son < 100);
    
}
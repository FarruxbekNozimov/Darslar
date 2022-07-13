#include <stdio.h>

int main(){

    int number,factor,limit,son,schotchik=0,a;
    a = 20;
    son = a*a;
    for ( number = 2; number <= son; number++){
        int isPrime = 1;
        for ( factor = 2; factor < number; factor++){
            if (number % factor == 0){
                isPrime = 0;       
                break;         
            }
        }
        if (isPrime){
            schotchik++;
            if (schotchik == a){
                printf("%d - %d\t",schotchik,number);
            }
        }        
    }

    return 0;
}
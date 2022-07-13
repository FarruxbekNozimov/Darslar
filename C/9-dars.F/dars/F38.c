#include <stdio.h>

int main(){

    for (int i = 15; i <= 22; i++){
        if (i % 2){
            printf("%d\n", i);
        }else{
            printf("%d\n", i*(-1));
        }
    }
    
    return 0;
}   
#include <stdio.h>

int main(){
    
    for (int i = 29; i < 55 ; i++){
        if(i % 6 != 0){
            printf("%d\n", i);
            continue;
        }

    }
    
    return 0;
}
#include <stdio.h>

int main(){
    
    for (int i = 78; i <112 ; i++){
        if(i % 5 == 0){
            continue;
        }
        printf("%d\n", i);

    }
    
    return 0;
}
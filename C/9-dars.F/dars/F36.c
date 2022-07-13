#include <stdio.h>

int main(){
    
    for (int i = 42; i < 77 ; i++){
        if(i % 3==0 || i % 5==0){
            continue;   
        }
        printf("%d\n", i);

    }
    
    return 0;
}
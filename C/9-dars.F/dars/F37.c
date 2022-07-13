#include <stdio.h>

int main(){
    int sum=0;
    for (int i = 8; i <= 18; i++){
        if(i % 4){
            sum += i;
            continue;
        }
    }
    printf("%d\n", sum);
    
    return 0;
}   
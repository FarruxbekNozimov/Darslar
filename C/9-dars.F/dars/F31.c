#include <stdio.h>

int main(){
    int sum=0;
    for (int i = 34; i <= 88; i++){
        if (i % 7 == 0 && i % 2 == 0){
            sum += i;
        }
    }
    printf("%d\n", sum);
    
    return 0;
}
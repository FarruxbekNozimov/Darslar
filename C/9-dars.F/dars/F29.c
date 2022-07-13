#include <stdio.h>

int main(){
    int sum=1;
    for (int i = 2; i < 19; i++){
        if (i % 3 == 0){
            sum *= i;
        }
    }
    printf("%i\n", sum);

    return 0;
}
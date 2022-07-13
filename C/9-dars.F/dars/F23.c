#include <stdio.h>

int main(){
    for (int i = 7; i < 78; i++){
        if (i % 3 == 0 && i % 5 == 0 && i % 2 == 0){
            printf("%d\n", i);
        }
    }
}
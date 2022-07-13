#include <stdio.h>

int main(){
    for (int i = 62; i < 112; i++){
        if (i % 9 == 0 || i % 11 == 0){
            printf("%d\n", i);
        }
    }

}
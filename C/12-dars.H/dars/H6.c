#include <stdio.h>

int main(){

    int sonlar[9] = {-8, 2, 5, 6, 1, 447, 55, 24, 26};
    int size = sizeof(sonlar) / sizeof(sonlar[0]);

    for (int i = size-1; i >= 0; i--){
        printf("%d\n", sonlar[i]);
    }

    

    return 0;
}
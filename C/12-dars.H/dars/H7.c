#include <stdio.h>

int main(){

    int sonlar[13] = {4, 3, 46, 0, 18, 27, 97, -11, -21, 24, 16, 18, -55};
    int size = sizeof(sonlar) / sizeof(sonlar[0]);

    for (int i = 0; i < size; i++){
        if (sonlar[i] != 0){
            printf("%d\n", sonlar[i]);
        }
    }
    

    

    return 0;
}
#include <stdio.h>

int main(){

    int sonlar[10] = {};
    int size = sizeof(sonlar) / sizeof(sonlar[0]);


    for (int i = 0; i < size; i++){
        scanf("%d", &sonlar[i]);
    }    
    for (int i = 0; i < size-1; i++){
        if (sonlar[0]<sonlar[i]){
            sonlar[0] = sonlar[i];
        }
    }
    printf("%d", sonlar[0]);
    return 0;
}
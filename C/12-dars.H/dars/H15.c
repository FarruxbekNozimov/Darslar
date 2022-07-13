#include <stdio.h>

int main(){

    int sonlar[11] = {};
    int size = sizeof(sonlar) / sizeof(sonlar[0]);

    for (int i = 0; i < size-1; i++){
        scanf("%d", &sonlar[i]);
    }    
    for (int i = 0; i < size-1; i++){
        sonlar[size] += sonlar[i];
    }
    printf("%d", sonlar[size]);

    return 0;
}
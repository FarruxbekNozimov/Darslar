#include <stdio.h>

int main(){

    int sonlar[10] = {};
    int size = sizeof(sonlar) / sizeof(sonlar[0]);
    int musbat=0,manfiy=0;
    for (int i = 0; i < size; i++){
        scanf("%d", &sonlar[i]);
    }    
    for (int i = 0; i < size; i++){
        if  (sonlar[i] > 0)
            musbat += sonlar[i];
        else
            manfiy += sonlar[i];
    }
    printf("%d", musbat-manfiy);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int sonlar[] = {1, 15, 2, 5, 21, 9};
    int sonlar2[10] = {},a,min = sonlar[0];
    int size = sizeof(sonlar)/sizeof(sonlar[0]),jami=0;
    // for (int i = 0; i < 10; i++){
    //     scanf("%d", &sonlar[i]);
    // }
    for(int i = 0; i < size; i++) {
        jami += sonlar[i];
    }
    jami /= size;

    for (int i = 0; i < size; i++){
            sonlar2[i] = abs(sonlar[i]-jami);
    }
    
    for (int i = 0; i < 10; i++){
        if (sonlar2[i] < min && sonlar2[i] != 0){
            min = sonlar2[i];
            a = i;
        }
    }
    printf("%d", sonlar[a]);
    return 0;
}


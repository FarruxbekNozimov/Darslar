#include <stdio.h>

int main(){

    int sonlar[10] = {};
    int size = sizeof(sonlar) / sizeof(sonlar[0]);

    for (int i = 0; i < 10; i++){
        scanf("%d", &sonlar[i]);
    }
    
    for (int i = 0; i < size; i++){
        if (sonlar[i] == 5){
            printf("%d ", i);
        }
    }

    

    return 0;
}
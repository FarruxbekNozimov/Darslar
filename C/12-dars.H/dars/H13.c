#include <stdio.h>

int main(){

    int sonlar[10] = {};
    int size = sizeof(sonlar) / sizeof(sonlar[0]);

    for (int i = 0; i < 10; i++){
        scanf("%d", &sonlar[i]);
    }
    
    for (int i = 0; i < size; i++){
        printf("%d ", sonlar[i]+10);
    }

    

    return 0;
}
#include <stdio.h>

int main(){

    int sonlar[10] = {};
    int size = sizeof(sonlar) / sizeof(sonlar[0]);


    for (int i = 0; i < size; i++){
        scanf("%d", &sonlar[i]);
    }    
    for (int i = 0; i < size; i++){
        if (sonlar[i] % 2)
            printf("%d ", sonlar[i]-2);
        else
            printf("%d ", sonlar[i]*2); 
    }

    return 0;
}
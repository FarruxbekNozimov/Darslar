#include <stdio.h>

int main(){
    int sonlar[10] = {};
    int sonlar1[10] = {};
    int size = sizeof(sonlar) / sizeof(sonlar[0]);

    for (int i = 0; i < size; i++){
        scanf("%d", &sonlar[i]);    
    }

    for (int i = 0; i < size; i += 2){
        sonlar1[i]=sonlar[i] + sonlar[i + 1];
        printf("%d ", sonlar1[i]);
    }


    return 0;
}
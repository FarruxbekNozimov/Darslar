#include <stdio.h>
#include <stdlib.h>

int main(){
    // system("cls");
    int sonlar[10],sonlar2[10];

    int size = sizeof(sonlar)/sizeof(sonlar[0]);

    for (int i = 0; i < size; i++){
        scanf("%d", &sonlar[i]);
    }
    for (int i = size-1; i < 0; i--){
        sonlar2[i] = sonlar[i];
    }


    return 0;
}
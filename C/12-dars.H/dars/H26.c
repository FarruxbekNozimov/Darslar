#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    int sonlar[10];

    int size = sizeof(sonlar)/sizeof(sonlar[0]);

    for (int i = 0; i < size; i++){
        scanf("%d", &sonlar[i]);
    }
    for (int i = size; i >= 0; i--){
        if (sonlar[i] % 2 == 0){
            printf("%d ", sonlar[i]);
        }
    }
    


    return 0;
}
#include<stdio.h>

int main(){
    int sonlar[10];
    int size = sizeof(sonlar)/sizeof(sonlar[0]);

    for(int i = 0; i < size; i++){
        scanf("%d", &sonlar[i]);
    }

    for(int i = 0; i < size; i++){
        printf("%d chi indexdagi qiymat: %d \n",i, sonlar[i]);
    }

    return 0;
}
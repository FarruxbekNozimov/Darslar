#include<stdio.h>

int main(){
    int sonlar[10];
    float jami=0;
    int size = sizeof(sonlar)/sizeof(sonlar[0]);
    for(int i = 0; i < 10; i++){
        scanf("%d", &sonlar[i]);
    }
    for(int i = 1; i < 10; i++){
        jami += sonlar[i];
    }
    printf("%f", jami/size);

    return 0;
}
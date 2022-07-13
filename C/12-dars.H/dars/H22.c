#include<stdio.h>

int main(){
    int sonlar[10],sanoq=0,son;
    int size = sizeof(sonlar)/sizeof(sonlar[0]);

    for(int i = 0; i < size; i++){
        scanf("%d", &sonlar[i]);
    }
    printf(">>> ");
    scanf("%d", &son);

    for(int i = 0; i < size; i++){
        if  (sonlar[i] == son){
            sanoq++;
        }
    }
    printf("%d", sanoq);

    return 0;
}
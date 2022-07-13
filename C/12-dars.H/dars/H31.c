#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int sonlar[10];
    int size = sizeof(sonlar)/sizeof(sonlar[0]);
    int t=0,j=0;
    for (int i = 0; i < size; i++){
        scanf("%d", &sonlar[i]);
    }
    for (int i = 0; i < size; i++){
        if (i % 2){
            t += sonlar[i];
        }else{
            j += sonlar[i];
        }
    }
    printf("%d ", t-j);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    // system("cls");
    int sonlar[10],s=0;

    int size = sizeof(sonlar)/sizeof(sonlar[0]);

    for (int i = 0; i < size; i++){
        scanf("%d", &sonlar[i]);
    }
    for (int i = 0; i < size; i++){
        if (sonlar[i] > 0){
            s+=i;
        }
    }
    printf("%d", s);


    return 0;
}
#include <stdio.h>

int main(){
    int son;
    scanf("%d", &son);

    int sonlar[8] = {5, 1, 3, 7, 4, 6, 9, 0};
    int size = sizeof(sonlar) / sizeof(sonlar[0]);

    for (int i = 0; i < size; i++){
        if (sonlar[i] == son){
            printf("Bor");
            return 0;
        }
    }
    printf("Yo'q");

    return 0;
}
#include <stdio.h>

int main(){
    
    int sonlar[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int son;
    scanf("%d", &son);
    int size = sizeof sonlar / sizeof sonlar[0];

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (sonlar[i] + sonlar[j] == son && i < j){
                printf("%d - %d \n", sonlar[i],sonlar[j]);
            }
        }
    }


    return 0;
}
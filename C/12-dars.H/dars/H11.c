#include <stdio.h>

int main(){

    int sonlar[] = {5, -4, 34, 60 , 54, -77, 80, -92};
    int sonlar1[] = {-8, 2, 5, 6, 1, 447, 55, 24};
    int size = sizeof(sonlar) / sizeof(sonlar[0]);

    for (int i = 0; i < size; i++){
        printf("%d ", sonlar[i]+sonlar1[i]);
    }

    

    return 0;
}
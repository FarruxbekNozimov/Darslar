#include <stdio.h>

int main(){
    
    int sonlar[] = {5, 4, -4, 15, 0, -22, 19};
    int sonlar1[] = {6, 2, 13, 5, -2, -1, 4, 10, -7, 0};

    int size = sizeof sonlar / sizeof sonlar[0];
    int size1 = sizeof sonlar1 / sizeof sonlar1[0];

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size1; j++){
            if (sonlar[i] == sonlar1[j]){
                printf("%d ", sonlar[i]);
            }
        }
    }


    return 0;
}
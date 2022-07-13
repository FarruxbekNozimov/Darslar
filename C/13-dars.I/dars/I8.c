#include <stdio.h>

int main(){
    
    int i, j;
    int sonlar[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int jami=0;
    int size1 = sizeof(sonlar[0]) / 4;
    int size = sizeof(sonlar)/4/size1;

    for (i = 0; i < size1; i++){                                 
        for (j = 0; j < size; j++){
            if (i == j || i +  j == size - 1){
                jami += sonlar[i][j];
            }
        }
    }
    printf("%d", jami);
    return 0;
} 
#include <stdio.h>

int main(){
            
    int i, j;
    int sonlar[3][3] = {
        {4, 2, -5}, 
        {8, 1, -7}, 
        {0, 6, -6}
    };
    int ustun = sizeof(sonlar[0]) / 4;
    int qator = sizeof(sonlar)/4/ustun;
    int sanoq = 0;
    for (i = 0; i < qator; i++){                                 
        for (j = 0; j < ustun; j++){                         
            if (sonlar[i][j] % 2 == 0){
                sanoq += sonlar[i][j];
            }
        }
    }
    printf("%d", sanoq);
    return 0;
} 
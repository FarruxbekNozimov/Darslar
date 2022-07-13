#include <stdio.h>

int main(){
            
    int i, j;
    int sonlar[3][4] = {
        {4, 2, -5, 3}, 
        {8, 1, -7, 9}, 
        {0, 6, -6, 7}
    };
    int ustun = sizeof(sonlar[0]) / 4;
    int qator = sizeof(sonlar)/4/ustun;
    
    for (i = 0; i < qator; i++){                                 
        for (j = 0; j < ustun; j++){                         
            if (i == 0){
                printf("%d ", sonlar[i][j]);
            }
        }
    }
    
    return 0;
} 
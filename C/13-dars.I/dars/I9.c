#include <stdio.h> 

int main(){

    int sonlar[7][4] = {};
    int ustun = sizeof(sonlar[0]) / 4;
    int qator = sizeof(sonlar)/4/ustun;

    for (int i = 0; i < qator; i++){
        for (int j = 0; j < ustun; j++){
            scanf("%d", &sonlar[i][j]);
        }
    }
    for (int i = 0; i < qator; i++){
        for (int j = 0; j < ustun; j++){
            if (i % 2 ){
                printf("%d ", sonlar[i][j]);
            }
        }
    }
    

}
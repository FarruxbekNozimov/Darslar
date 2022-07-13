#include <stdio.h>

int main(){
    
    int a[2][4] = {};
    int b[2][4] = {};
    int ustun = sizeof(a[0]) / 4;
    int qator = sizeof(a)/4/ustun;
    for (int i = 0; i < qator; i++){
        for (int j = 0; j < ustun; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < qator; i++){
        for (int j = 0; j < ustun; j++){
            scanf("%d", &b[i][j]);
        }
    }
    int son=0;
    for (int i = 0; i < qator; i++){                                 
        for (int j = 0; j < ustun; j++){                         
            if (a[i][j] == b[i][j]){
                son ++;
            }
        }
    }
    if (son == ustun*2)
        printf("Ular Teng");
    else
        printf("Ular Teng Emas");

    return 0;
} 
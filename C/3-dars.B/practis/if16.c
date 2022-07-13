#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int son[3],num1,num2,num3;
    for (int i = 0; i < 3; i++){
        printf("%d-sonni kiriting : ", i+1);
        scanf("%d", &son[i]);
    }
    if (son[0] < son[1] && son[1] < son[2]){
        for (int j = 0; j < 3; j++){
            son[j]*=2;
            printf("%d\n", son[j]);
        }
    }else{
        for (int j = 0; j < 3; j++){
            son[j] = 0 - son[j];
            printf("%d\n", son[j]);
        }
        
    }
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int son[3];
    for (int i = 0; i < 3; i++){
        printf("%d-sonni kiriting : ", i+1);
        scanf("%d", &son[i]);
    }
    
    if (son[0] < son[1] && son[0] < son[2]){
        if (son[1] > son[2]){
            printf("O'rtachasi %d\n", son[2]);
        }else{
            printf("O'rtachasi %d\n", son[1]);
        }
    }else if (son[1] < son[0] && son[1] < son[2]){
        if (son[0] > son[2]){
            printf("O'rtachasi %d\n", son[2]);
        }else{
            printf("O'rtachasi %d\n", son[0]);
        }
    }else if (son[2] < son[0] && son[2] < son[1]){
        if (son[0] > son[1]){
            printf("O'rtachasi %d\n", son[1]);
        }else{
            printf("O'rtachasi %d\n", son[0]);
        }
    }else{
        printf("Barchasi teng", son[0]);
    }
    


}
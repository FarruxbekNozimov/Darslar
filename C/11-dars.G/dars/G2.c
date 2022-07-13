#include <stdio.h>

int main(){
    int son;
    scanf("%d", &son);

    for (int i = son; i > 0; i--){
        for (int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}
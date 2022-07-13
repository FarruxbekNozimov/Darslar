#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    for (int i = 1; i <= 10; i++){
        for (int j = 1; j <= 5; j++){
           printf("%d * %d = %d\t", j, i, i*j);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 1; i <= 10; i++){
        for (int j = 6; j <= 10; j++){
           printf("%d * %d = %d\t", j, i, i*j);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main(){
    int boyi,eni;
    scanf("%d %d", &boyi, &eni);

    for (int i = 1; i < boyi; i++){
        for (int i = 0; i < eni; i++){
            printf("* ");
        }
        printf("\n");
    }
    

    return 0;
}   
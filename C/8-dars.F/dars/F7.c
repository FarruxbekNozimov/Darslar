#include <stdio.h>

int main(){

    //--------------VAZIFA-13-----------------

    for (int i = 20; i <= 420; i++){
        if (i % 5 == 0 && i % 10){
            printf("%d", i);
        }
    }

    //--------------VAZIFA-14-----------------
    int son;
    scanf("%d", &son);
    for (int i = 1; i <= son; i++){
        printf("%d ", i*i);
    }

    //--------------VAZIFA-15-----------------

    int num;
    scanf("%d", &num);
    for (int i = 1; i*i < num; i++){
        printf("%d ", i*i);
    }

    return 0;
}
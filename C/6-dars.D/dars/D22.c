#include <stdio.h>

int main(){

    int son,i=1;
    printf(">>> ");
    scanf("%d", &son);
    

    while (i<=son){
        if (son % i == 0){
            printf("%d ", i);
        }
        i++;
    }
    return 0;
}
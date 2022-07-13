#include <stdio.h>

int main(){
    int i, j, a,b;

    printf(">>> ");
    scanf("%d %d", &a, &b);

    for (i = 0; i <= a; i++){
        for (j = 0; j <= b; j++){
            if (i == 0 || i == a || j == 0 || j == b ){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int i, j, a;

    printf(">>> ");
    scanf("%d", &a);

    for(i=1; i<=a; i++){
        for(j=1; j<=a; j++){
            if(i==1 || i==a || j==1 || j==a || i==a  || i==j || i > j){
                printf("* ");
            }else{                                                          
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
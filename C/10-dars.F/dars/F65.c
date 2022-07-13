#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int i, j, son;

    printf("Enter number of rows: ");
    scanf("%d", &son);

    for(i=1; i<=son; i++){
        for(j=1; j<=son; j++){

            if(i==son || j==1 || j==son || i>=j || j>=(son - i + 1)){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
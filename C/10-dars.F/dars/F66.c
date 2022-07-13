#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int i, j, son; 

    printf("Enter number of rows: ");
    scanf("%d", &son);

    for(i=1; i<=son; i++){
        for(j=1; j<=son; j++){
            if (j==1 || j==son  ||  i<=son/2 && j<=i || i+j<=son+1 && j<=son/2 && i>=j  ||    i>son/2 && j>=i || i+j>=son+1 && j>son/2 && i<=j){                
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
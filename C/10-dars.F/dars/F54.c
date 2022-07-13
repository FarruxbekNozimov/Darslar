#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int i, j, son;  //20

    printf("Enter number of rows: ");
    scanf("%d", &son);

    for(i=1; i<=son; i++){
        for(j=1; j<=son; j++){
            if (i==1 || i==son || j==1 || j==son  ||  i<=son/2 && j==i || i+j==son+1 && j<=son/2){                
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
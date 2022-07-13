#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    // for (int i = 0; i < 10; i++){
    //     for (int j = 0; j < 10; j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    
    for(int i=1; i<=10; i++){
        for(int j=i; j<10; j++){
            printf("  ");
        }
        for(int j=1; j<=i; j++){
            printf(" %d  ", i);
        }

        printf("\n");
    }
    
    return 0;
}

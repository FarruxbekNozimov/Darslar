#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int son;
    scanf("%d",&son);
    for (int i = 'A'; i <= 'A'+son; i++){
        for (int j = 'A'; j < i; j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    


    return 0;
}
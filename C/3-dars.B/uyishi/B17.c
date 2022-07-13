#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int son;
    printf("Son kiriting : ");
    scanf("%d", &son);

    if (son%3 == 0 && son%6 != 0){
        printf("Good");
    }else{
        printf("Bad");
    }

    return 0;
}

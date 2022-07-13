#include <stdio.h>

int main(){
    int son1,son2,son3;

    printf("1-Son : ");
    scanf("%d", &son1);
    printf("2-Son : ");
    scanf("%d", &son2);
    printf("3-Son : ");
    scanf("%d", &son3);
    printf("O'rta arifmetigi : %d", (son1+son1+son1)/3);

    return 0;
}
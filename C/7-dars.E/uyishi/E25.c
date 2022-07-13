#include <stdio.h>

int main() {

    int son1,son2,i=1,jami=0;
    printf(">>> ");
    scanf("%d %d",&son1,&son2);

    while (i <= son1){
        if (son1 % i == 0 && son2 % i == 0){
            jami = i;
        }
        i++;
    }
    printf("%d",jami);
}
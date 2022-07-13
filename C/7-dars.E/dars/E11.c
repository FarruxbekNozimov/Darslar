#include <stdio.h>

int main(){
    int num1,num2,jami=0;
    printf(">>> ");
    scanf("%d %d",&num1,&num2);

    do{
        jami += num1;
        num1++;
    }while (num1<=num2);

    printf("%d",jami);
    
    return 0;
}
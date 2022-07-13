#include <stdio.h>

int main(){

    int a,b;
    printf(">>> ");
    scanf("%d %d", &a, &b);

    do{
        if (a % 2){
            printf("%d ", a);
        }        
        a++;
    } while (a < b);
    
}
#include <stdio.h>

int main(){

    int num,i=1,jami=1;
    printf(">>> ");
    scanf("%d", &num);
    
    do {
        if (num % i == 0){
            jami++;            
        }
        i++;
    }while (i < num);
    if (jami == 2)
        printf("Tub son");
    else
        printf("Tub emas");
    return 0;

}
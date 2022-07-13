#include <stdio.h>
#include <stdlib.h>

int main(){

    int a;
    printf("A ni kirting: ");
    scanf("%d",&a);
    
    if (a<0){
        a = a * (-1);
    }
    printf("%d",a);


}
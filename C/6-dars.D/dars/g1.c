#include <stdio.h>
#include <stdlib.h>

int main(){

    int son,xona = 1;
    printf(">>> ");
    scanf("%d",&son);

    while (abs(son)>9){
        son /= 10;
        xona++;
    }
    printf("%d",xona);
    
    return 0;

}
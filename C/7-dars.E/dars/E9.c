#include <stdio.h>

int main(){

    int i=1,son,schetchik=0;
    scanf("%d",&son);

    do{
        schetchik += i;
        i++;
    }while (i<=son);

    printf("%d",schetchik);
    
}
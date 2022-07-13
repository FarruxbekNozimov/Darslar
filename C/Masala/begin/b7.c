#include <stdio.h>
#include <stdlib.h>

int main(){
    //Doiraning radius berilgan.Uning uzunligi L va yuzasi S aniqlansin. L=2*pi*r S=pi*r^2

    int r,L,S;
    const float pi=3.14;
    
    printf("Radius ni kiriting: ");
    scanf("%d",&r);
    L=2*pi*r;
    S=pi*r*r;
    printf("%d\n",L);
    printf("%d",S);



}
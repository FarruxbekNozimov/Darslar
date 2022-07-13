#include <stdio.h>
#include <stdlib.h>

int main(){
    //Paralelipipped tomonlari a,b,c, berilgan.Uning hajmi V=a*b*c va to'la sirti S=2*(a*b+b*c+a*c)

    int a,b,c,V,S;

    printf("A ni kiriting: ");
    scanf("%d",&a);
    printf("B ni kiriting: ");
    scanf("%d",&b);
    printf("C ni kiriting: ");
    scanf("%d",&c);
    V=a*b*c;
    S=2*(a*b+b*c+a*c);
    printf("%d\n",V);
    printf("%d",S);
    





}
#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int a,b,c,manfiy=0,musbat=0;
    
    printf("1-Son kiriting >> ");
    scanf("%d", &a);
    printf("2-Son kiriting >> ");
    scanf("%d", &b);
    printf("3-Son kiriting >> ");
    scanf("%d", &c);
    if (a>0){
        musbat+=1;
    }else if (a<0){
        manfiy+=1;
    }
    if (b>0){
        musbat+=1;
    }else if (b<0){
        manfiy+=1;
    }
    if (c>0){
        musbat+=1;
    }else if (c<0){
        manfiy+=1;
    }
    printf("Musbat sonlar >> %d\n", musbat);
    printf("Manfiy sonlar >> %d", manfiy);

    return 0;
    
}
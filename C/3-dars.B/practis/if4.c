#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int a,b,c;
    
    printf("1-Son kiriting >> ");
    scanf("%d", &a);
    printf("2-Son kiriting >> ");
    scanf("%d", &b);
    printf("3-Son kiriting >> ");
    scanf("%d", &c);
    int sum = 0;
    if (a>0){
        sum +=1;
    }
    if (b>0){
        sum+=1;
    }
    if (c>0){
        sum+=1;
    }
    printf("Musbat sonlar >> %d", sum);

    return 0;
    

}
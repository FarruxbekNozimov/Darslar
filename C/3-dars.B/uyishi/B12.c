#include<stdio.h>
int main(){

    int a,b,c,d,e;
    printf("1-sonni kiritish: ");
    scanf("%d",&a);
    printf("2-sonni kiritish: ");
    scanf("%d",&b);
    printf("3-sonni kiritish: ");
    scanf("%d",&c);
    printf("4-sonni kiritish: ");
    scanf("%d",&d);
    printf("5-sonni kiritish: ");
    scanf("%d",&e);

    if (a>b && a>c && a>d && a>e){
        printf("%d",a);
    }
    else if (b>a && b>c && b>d && b>e){
        printf("%d",b);
    }
    else if (c>a && c>b && c>d && c>e){
        printf("%d",c);
    }
    else if (d>a && d>b && d>c && d>e){
        printf("%d",d);
    }
    else if (e>a && e>b && e>c && e>d){
        printf("%d",e);
    }
    else{
        printf("%d",a);
    }
    
    
   
    return 0;
 }
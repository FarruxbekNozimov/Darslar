#include <stdio.h>

int main(){
    
    int a,b;
    scanf("%d %d", &a, &b);

    if (a>b){
        printf("%d", a-b);
    }else if (a<b){
        printf("%d", b-a);
    }else{
        printf("Ular Teng ");
    }

}
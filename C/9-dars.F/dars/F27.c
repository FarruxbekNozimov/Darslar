#include <stdio.h>

int main(){
    
    int a,b,c;
    scanf("%d %d", &a, &b);
    
    if (a>b){
        c = a;a = b;b = c;
    }else if (a<b){
        
    }else{
        printf("Ular Teng ");
    }

    for (int i = a; i <= b; i++){
        printf("%d\n", i);
    }
    
}
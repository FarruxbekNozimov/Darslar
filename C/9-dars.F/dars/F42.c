#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d", &a, &b);

    if (a>b){
        c = a;a = b;b = c;
    }else if (a==b){
        printf("Ular Teng ");
    }

    for (int i = b; i >= a; i--){
        printf("%d\n", i);
    }
    

    return 0;
}   
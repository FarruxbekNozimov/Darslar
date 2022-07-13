#include <stdio.h>

int kattasi(int a,int b){
    if (a>b) return a;     
    return b;
}

int main(){

    printf("%d",kattasi(3,2));
    
    return 0;
}
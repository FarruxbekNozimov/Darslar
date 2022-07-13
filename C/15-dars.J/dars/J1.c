#include <stdio.h>

int qoshish(int a,int b){
    return a+b;
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",qoshish(a,b));
    
    return 0;
}
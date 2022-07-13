#include <stdio.h>

int main(){

    int son = 1,n;
    scanf("%d",&n);
    while (son*son < n){
        printf("%d ",son*son);
        ++son;
    }

    return 0;

}
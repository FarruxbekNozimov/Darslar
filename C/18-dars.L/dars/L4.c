#include <stdio.h>

void addres(int *num){
    *num *= *num;
}

int main(){
    int son;
    scanf("%d", &son);
    addres(&son);
    printf("%d\n", son);
    return 0;
}
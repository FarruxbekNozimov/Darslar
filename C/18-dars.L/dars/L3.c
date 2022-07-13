#include <stdio.h>

void addres(int *num,int *num2){
    int i = *num;
    *num = *num2;
    *num2 = i;
}

int main(){
    int son = 7;
    int son2 = 10;
    addres(&son,&son2);
    printf("%d\n", son);
    printf("%d\n", son2);
    return 0;
}
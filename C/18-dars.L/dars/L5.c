#include <stdio.h>
#include <math.h>

void addres(int *num){
    *num = sqrt(*num);
}

int main(){
    int son;
    scanf("%d", &son);
    addres(&son);
    printf("%d\n", son);
    return 0;
}
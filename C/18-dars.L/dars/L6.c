#include <stdio.h>

void almash(int *num){
    *num = *num % 10 * 10 + *num / 10;
}

int main(){
    int son;
    scanf("%d", &son);
    almash(&son);
    printf("%d\n", son);
    return 0;
}
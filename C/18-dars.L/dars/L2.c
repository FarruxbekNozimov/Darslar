#include <stdio.h>

void addres(int *soz){
    *soz += 3;
}

int main(){
    int son = 7;
    addres(&son);
    printf("%d\n", son);
    return 0;
}
#include <stdio.h>

void addres(int *soz){
    printf("%p\n", &soz); 
}

int main(){
    int son = 7;
    addres(&son);
    return 0;
}
#include <stdio.h>
int son = 10;

void oshoz(){
    son = son*son;
    printf("%d",son);
}

int main(){
    oshoz();
}
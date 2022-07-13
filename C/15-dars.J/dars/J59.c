#include <stdio.h>
#include <stdbool.h>

bool func59(int a){
    for(int i=2;i<a;i++)
        if(a % i == 0) return false;
    return true;
}

int main(){
    printf("%d",func59(11));
    return 0;
}
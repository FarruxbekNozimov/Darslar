#include <stdio.h>

int modul(int a){
    if (a<0) a*-1;

    return a;
}

int main(){

    printf("%d",modul(0));
    
    return 0;
}
#include <stdio.h>

void big(float a,float b,float c){
    printf("%f",a>b?a:b>c?b:c);
}

int main(){
    big(19,4,3);
}
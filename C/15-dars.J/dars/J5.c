#include <stdio.h>

float kattasi(float a,float b,float c,float d,float e){
    if (a<b) a=b;
    if (a<c) a=c;
    if (a<d) a=d;
    if (a<e) a=e;

    return a;
}

int main(){
    printf("%f",kattasi(3,2,4,5,6));
    return 0;
}
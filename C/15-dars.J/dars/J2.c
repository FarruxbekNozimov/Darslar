#include <stdio.h>

float ayrish(float a,float b){
    return a/b;
}

int main(){
    float a,b;
    scanf("%f %f",&a,&b);
    printf("%f",ayrish(a,b));
    
    return 0;
}
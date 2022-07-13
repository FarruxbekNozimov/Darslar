#include <stdio.h>

void know (float *num1,float *num2){
    printf("%f\n", *num1 + *num2);
}


int main(){
    float son=10,son2=5;

    know(&son,&son2); 
    return 0;
}
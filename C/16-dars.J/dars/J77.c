#include <stdio.h>

void pow_real(int a,int b){
    int grade = 1;
    for (int i = 0; i < b; i++) grade*=a;
    printf("%d",grade);
}

int main(){
    pow_real(3,2);
}
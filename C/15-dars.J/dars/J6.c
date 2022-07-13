#include <stdio.h>

int pow2(int a,int b){
    int c=1;
    for (int i = 0; i < b; i++)
        c *= a;

    return c;
}
int main(){

    printf("%d",pow2(3,3));
    
    return 0;
}
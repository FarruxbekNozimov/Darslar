#include <stdio.h>

int main(){

    int i=100,son=1000,s=0,b,o,y;
    //121
    do{
        b = i / 100;
        o = i / 10 % 10;
        y = i % 10;
        if (b == y && y != o || b == o && o != y || y == o && o != b){
            printf("%d\n",i);
        }
        i++;
    } while (i <= son);    
    
        
    
    return 0;
}
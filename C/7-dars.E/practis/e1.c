#include <stdio.h>

int main(){

    int a=1,b=33,s=0;
    // scanf("%d %d",a,b);
    a = b - 4;
    do{
        if (a % 2 == 0){
            printf("%d ",a);
            s++;
        }
        if (s==3) {
            break;
        }
        a++;
    } while (a <= b);
    
        
    
    return 0;
}
#include <stdio.h>

int main(){

    int a=1,b=10,s=0;
    // scanf("%d %d",a,b);

    do{
        if (a % 2 == 1){
            printf("%d ",a);
            s++;
        }
        if (s==3) {
            break;
        }
        ++a;
    } while (a <= b);
    
        
    
    return 0;
}
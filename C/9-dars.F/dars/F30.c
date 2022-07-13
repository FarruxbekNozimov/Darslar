#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    for (int i = a; i <= a*2; i++){
        printf("%d\n", i);
    }
    
    
    return 0;
}
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    if (n == 0){
        printf("0\n");
    }else{
        for (int i = n*(-1); i <= n; i++){
            printf("%d, ", i);
        }
    }
    
    return 0;
}   
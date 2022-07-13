#include <stdio.h>

int main() {

    int a,b,s=1;
    printf(">>> ");
    scanf("%d %d", &a,&b);

    while (b > 0){  
        b--;
        s *= a;
    }
    printf(">>> %d", s);

    return 0;
}
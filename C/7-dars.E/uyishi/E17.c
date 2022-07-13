#include <stdio.h>

int main() {

    int a,b,s=1;
    printf(">>> ");
    scanf("%d %d", &a,&b);

    do {
        b--;
        s *= a;
    }while (b > 0);
    printf(">>> %d", s);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");

    int a, b,s=1;
    scanf("%d %d", &a, &b);
    while(b > 0) {
        s *= a; 
        b--;
    }
    printf("%d", s);

    return 0;
}
#include <stdio.h>

int main(){
    int n,count = 0;
    printf("Son kiriting: ");
    scanf("%d", &n);

    do {
        n /= 10;
        ++count;
    } while (n != 0);

    printf(">>> %d", count);

    return 0;
}
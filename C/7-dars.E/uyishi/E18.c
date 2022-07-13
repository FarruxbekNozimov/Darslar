#include <stdio.h>

int main() {

    int n_son,b=1;
    printf(">>> ");
    scanf("%d", &n_son);

    do {
        if (n_son % b == 0) {
            printf("%d ", b);
        }
        b++;
    }while (n_son > 0);


    return 0;
}
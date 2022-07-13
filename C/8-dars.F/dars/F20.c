#include <stdio.h>

int main() {

    int n, t1 = 0, t2 = 1, keyingi_son = t1 + t2, jami;

    printf("Son kiriting: ");
    scanf("%d", &n);

    for (int i = 3; i <= n; ++i) {
        keyingi_son = t1 + t2;
        t1 = t2;
        t2 = keyingi_son;
        jami = keyingi_son;
    }
    printf("%d", jami);

    return 0;
}

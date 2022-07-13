#include <stdio.h>

int count(int num, int digit){
    if (num == 0)
        return 0;
    if (num % 10 == digit)
        return 1 + count(num / 10, digit);
    return count(num / 10, digit);
}

int main() {

    printf("%d", count(123123, 9));

    return 0;
}


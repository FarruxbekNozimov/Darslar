#include <stdio.h>

int main() {
    int n, t = 0, qoldiq, son;
    printf("Son kirting: ");
    scanf("%d", &n);
    son = n;

    while (n != 0) {
        qoldiq = n % 10;         
        t = t * 10 + qoldiq;     
        n /= 10;                
    }

    if (son == t)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
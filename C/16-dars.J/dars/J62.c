#include <stdio.h>
#include <stdbool.h>

bool is_prime(char belgi) {
    return ('a' <= belgi && belgi <= 'z');
}

int main(){
    char belgi;
    scanf("%c", &belgi);
    printf("%d", is_prime(belgi));

    return 0;
}
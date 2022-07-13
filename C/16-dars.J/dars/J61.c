#include <stdio.h>
#include <stdbool.h>

bool is_prime(char belgi) {
    return ('A' <= belgi && belgi <= 'Z');
}

int main(){
    char belgi;
    scanf("%c", &belgi);
    printf("%d", is_prime(belgi));

    return 0;
}
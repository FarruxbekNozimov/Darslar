#include <stdio.h>
#include <stdbool.h>

char is_prime(char belgi) {
    return ('a' <= belgi && belgi <= 'z') ? belgi-32 : belgi;
}

int main(){
    char belgi;
    scanf("%c", &belgi);
    printf("%c", is_prime(belgi));

    return 0;
}
#include <stdio.h>
#define SIZE 30

int main(){
    char soz[SIZE];
    int s = 0;

    fgets(soz, SIZE, stdin);

    for (int i = 0; soz[i] != '\0'; i++){
        if (soz[i] == 'a'){
            s++;
        }
    }
    printf("%d", s);
    return 0;
} 
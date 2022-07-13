#include <stdio.h>

int main(){
    
    char gap[20];

    fgets(gap, 20, stdin);

    for (int i = 0; gap[i] != '\0'; i++){
        printf("%c \n", gap[i]);
    }

    return 0;
} 
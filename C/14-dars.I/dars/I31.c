#include <stdio.h>
#define SIZE 30

int main(){
    char gap[SIZE]="Chelsea is chempion";
    
    for (int i = SIZE-1; i >= 0; i--)
        printf("%c", gap[i]);

    return 0;
} 
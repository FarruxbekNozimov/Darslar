//Bismillahir Rohmanir Rohim

#include <stdio.h>
#include <string.h>

void TESKARI(char array[], int son){
    for (int i = son; i >= 0; i--)
        printf("%c",array[i]);
}

int main() {
    char text[30];
    scanf("%s",text);

    TESKARI(text,strlen(text)-1);
    return 0;
}
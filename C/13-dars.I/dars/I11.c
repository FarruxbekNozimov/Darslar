#include <stdio.h> 

int main(){
    char soz[30] = "Salom";
    for (int i = 0; soz[i] != '\0'; i++){
        printf("%c", soz[i]);
        printf("\n");
    }
    return 0;
}
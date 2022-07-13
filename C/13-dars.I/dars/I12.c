#include <stdio.h> 

int main(){
    char soz[100] = "Har bir ishda hikmat bor";

    for (int i = 0; soz[i] != '\0'; i++){
        if (soz[i] == 'a' || soz[i] == 'o'){
            soz[i] = ' ';
        }
        printf("%c", soz[i]);

    }
    return 0;
}
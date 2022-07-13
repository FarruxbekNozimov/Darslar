#include <stdio.h> 

int main(){
    char soz[50] = "Javlonbek Sobirov yaxshi bola";

    for (int i = 0; soz[i] != '\0'; i++){
        if (soz[i] == ' '){
            soz[i] = '\n';
        }
        printf("%c", soz[i]);

    }
    return 0;
}
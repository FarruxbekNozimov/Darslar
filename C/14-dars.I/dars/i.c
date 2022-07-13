#include <stdio.h>

int main() {
    char key[30] = "qwertyuiopasdfghjklzxcvbnm";
    char h;

    scanf("%c", &h);

    for (int i = 0; key[i] != '\0'; i++){
        (h == key[i]) ? printf("%c", key[i + 1]) :          
        else if (h == 'm'){
            printf("q");
            break;
        }
    }
    

    return 0;
}
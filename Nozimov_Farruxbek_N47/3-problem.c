//Bismillahir Rohmanir Rohim

#include <stdio.h>
#include <string.h>

int main() {
    char problem_2[30];
    fgets(problem_2, 30, stdin);
    char z = 'o',a = '\'';
    for (int i = 0; i < strlen(problem_2); i++){
        if (problem_2[i] == 'A' || problem_2[i] == 'a'){
            printf("%c%c",z,a);
            continue;
        }

        printf("%c",problem_2[i]);
    }
    

    return 0;
}
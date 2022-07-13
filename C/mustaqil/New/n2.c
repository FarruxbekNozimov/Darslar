#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    
    int n=15;
    scanf("%d", &n);
     n=15;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (i == 1 || j == 1 || i == n/2){
                printf("F ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    int k = 0;
    for (int i = 1; i <= n; ++i, k = 0) {
        for (int space = 1; space <= n - i; ++space) {
            printf("  ");
        }
        while (k != 2 * i - 1) {
            if (k == 0 || k == 2 * i - 2 || i == n/2+1){
                printf("A ");
            }
            else {
                printf("  ");
            }
            // printf("* ");
            ++k;
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");

    printf("  R R R R R R R R R R R R R R R R R   \n");
    printf("R                                   R \n");
    printf("R                                   R \n");
    printf("R                                   R \n");
    printf("R                                   R \n");
    printf("R                                   R \n");
    printf("R                                   R \n");
    printf("R R R R R R R R R R R R R R R R R R R \n");
    printf("R R                                   \n");
    printf("R   R                                 \n");
    printf("R     R                               \n");
    printf("R       R                             \n");
    printf("R         R                           \n");
    printf("R           R                         \n");
    printf("R             R                       \n");
    printf("R               R                     \n");
    printf("R                 R                   \n");
    printf("R                  R                  \n");
    printf("R                    R                \n");
    printf("R                      R             \n");
    printf("R                        R           \n");

    printf("\n");
    printf("\n");

    printf("  R R R R R R R R R R R R R R R R R   \n");
    printf("R                                   R \n");
    printf("R                                   R \n");
    printf("R                                   R \n");
    printf("R                                   R \n");
    printf("R                                   R \n");
    printf("R                                   R \n");
    printf("R R R R R R R R R R R R R R R R R R R \n");
    printf("R R                                   \n");
    printf("R   R                                 \n");
    printf("R     R                               \n");
    printf("R       R                             \n");
    printf("R         R                           \n");
    printf("R           R                         \n");
    printf("R             R                       \n");
    printf("R               R                     \n");
    printf("R                 R                   \n");
    printf("R                  R                  \n");
    printf("R                    R                \n");
    printf("R                      R             \n");
    printf("R                        R           \n");


    printf("\n");
    printf("\n");
    
    printf("U                                   U \n");
    printf("U                                   U \n");
    printf("U                                   U \n");
    printf("U                                   U \n");
    printf("U                                   U \n");
    printf("U                                   U \n");
    printf("U                                   U \n");
    printf("U                                   U \n");
    printf("U                                   U \n");
    printf("U                                   U \n");
    printf("U                                   U \n");
    printf("U                                   U \n");
    printf("U                                   U \n");
    printf("U                                   U \n");
    printf("U                                   U \n");
    printf("U                                   U \n");
    printf("  U                               U   \n");
    printf("    U U U U U U U U U U U U U U U     \n");
    
    printf("\n");
    printf("\n");
    
    printf("X                                   X \n");
    printf("  X                               X   \n");
    printf("    X                           X     \n");
    printf("      X                       X       \n");
    printf("        X                   X         \n");
    printf("          X               X           \n");
    printf("            X           X             \n");
    printf("              X       X               \n");
    printf("                X   X                 \n");
    printf("                  X                   \n");
    printf("                X   X                 \n");
    printf("              X       X               \n");
    printf("            X           X             \n");
    printf("          X               X           \n");
    printf("        X                   X         \n");
    printf("      X                       X       \n");
    printf("    X                           X     \n");
    printf("  X                               X   \n");
    printf("X                                   X \n");
    
    return 0;

}
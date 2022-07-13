//Bismillahir Rohmanir Rohim

#include <stdio.h>

int main() {

    int sonlar[5][5] = {
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
    };
    int ustun = sizeof(sonlar)/sizeof(sonlar[0]);
    int qator = sizeof sonlar /4/ustun;

    for (int i = 0; i < qator; i++) {
        for (int j = 0; j < ustun; j++) {
            if (i-1 >= j)
                printf("* ");
            else
                printf("%d ", sonlar[i][j]);
            
        }
        printf("\n");
    }
    return 0;
}
//Bismillahir Rahmanir Rahim

#include <stdio.h>
// N ga N o'lchamli matritsaning qator va ustuni juft bo'lsa 
//elmentning o'zi qolsin aks holda o'rniga * cha chiqaring

int main () {

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
            if (i % 2 && j % 2) {
                printf("* ");
            }else{
                printf("%d ", sonlar[i][j]);
            }
        }
        printf("\n");
    }
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    FILE *musbat = fopen("musbat.txt", "w");
    FILE *manfiy = fopen("manfiy.txt", "w");

    srand(time(NULL));

    int son;
    scanf("%d", &son);
    int sonlar[son];

    for (int i = 0; i < son; i++){
        sonlar[i] = rand() % 102 - 50;
        if (sonlar[i] < 0){
            fprintf(manfiy, "%d\n", sonlar[i]);
        }else if (sonlar[i] > 0){
            fprintf(musbat, "%d\n", sonlar[i]);
        }
    }
    
    fclose(musbat);
    fclose(manfiy);
}
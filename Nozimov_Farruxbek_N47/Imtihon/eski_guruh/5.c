#include <stdio.h>


int main () {
    FILE *file = fopen("FILES/text.txt", "r");
    FILE *juft = fopen("FILES/juft.txt", "w");
    FILE *toq = fopen("FILES/toq.txt", "w");


    int son, a = 0;
    int sons[10]; 
    while (!feof(file)) {
        fscanf(file, "%d", &son);
        if (son % 2 == 0){
            fprintf(juft, "%d\n", son);
        }else{
            sons[a] = son;
            a++;
        }
    }
    
    for (int i = a-1; i >= 0; i--){
        fprintf(toq, "%d\n", sons[i]);
    }
    fclose(file);
    fclose(juft);
    fclose(toq);

    return 0;
}
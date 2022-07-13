#include <stdio.h>

int main(){
    FILE *fp;
    FILE *fp2;
    fp = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");
    char c;
    while (!feof(fp)){
        c = fgetc(fp);
        break;
    }
    fprintf(fp2, "%d", c);

    fclose(fp);
    fclose(fp2);

    return 0;
}
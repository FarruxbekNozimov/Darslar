#include <stdio.h>

int main(){
    FILE * fp = fopen("products.txt", "w");
    fprintf(fp, "Potatos\nTomatos\nOnions\nCucumbers\nRice\nBread\nCarrots\n");

    fclose(fp);

    rename("products.txt", "stuff.txt");
}
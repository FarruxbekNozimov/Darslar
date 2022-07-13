#include <stdio.h>

int main(){

    FILE *nums = fopen("gap_aniqla.txt", "r");
    int gap=0,soz=1;
    char belgi;
    while (!feof(nums)) {
        belgi = fgetc(nums);
        if (belgi == ' '){
            soz++;
        }
        if (belgi == '.'){
            gap++;
        }
    }
    fclose(nums);
    printf("%d %d",soz,gap);

}
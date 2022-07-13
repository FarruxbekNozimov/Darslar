#include <stdio.h>

int main(){

    FILE *nums = fopen("soz1_sana.txt", "r");

    char soz[10],q=0;
    char belgi;
    while (!feof(nums)) {
        belgi = fgetc(nums);
        if (belgi == ' '){
            printf("%s %s",soz,soz);
            break;
        }
        soz[q] = belgi;
        q++;
    }
    fclose(nums);


}
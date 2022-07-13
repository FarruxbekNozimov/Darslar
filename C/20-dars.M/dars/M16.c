#include <stdio.h>
// Faylda bir nechta gap yozilgan va ushbu 
// fayldagi oxirgi gapning 1 chi so'zini 2 marta chiqaring.

int main(){

    FILE *nums = fopen("sozo_sana.txt", "r");
    char soz[10],a;
    while (!feof(nums)) {
        a = fgetc(nums);
        if (a == '.') {
            fscanf(nums, "%s", soz);
        }
    }
 
    printf ("%s",soz);
    
           
    fclose(nums);
}
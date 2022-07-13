#include <stdio.h>
// Faylni ichiga bir nechta so'z berilgan va 
// ushbu faylda oxirgi so'zni 2 marta chiqaring.

int main(){

    FILE *nums = fopen("sozo_sana.txt", "r");
    char soz[10];
    while (!feof(nums)) {
        fscanf(nums, "%s", &soz);
    }
    printf("%s",soz);
    fclose(nums);


}
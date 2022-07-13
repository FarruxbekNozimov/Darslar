#include <stdio.h>
// Faylda gap yozilgan va ushbu 
// fayldagi 2 so'zini so'zni 2 marta chiqaring.

int main(){

    FILE *nums = fopen("sozo_sana.txt", "r");
    char soz[100],s;

    while (fgets(soz, 100, nums) != NULL) {
        printf("%s", soz);
    }
    
    
    fclose(nums);
}
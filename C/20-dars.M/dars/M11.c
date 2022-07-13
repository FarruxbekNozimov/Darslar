#include <stdio.h>
//Faylda 20 ta son yozilgan va ushbu 
//fayldan eng katta sonni chiqaring. (seriya ishlatilmasin)

int main(){

    FILE *nums = fopen("nums.txt", "r");
    

    int max = 0, max_i = 0;
    int num;
    while (!feof(nums)) {
        fscanf(nums, "%c", &num);
        printf("%c", num);
        if (num > max) {
            max = num;
            max_i = num;
        }
    }
    

    fclose(nums);


}
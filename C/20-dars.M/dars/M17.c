#include <stdio.h>
// Faylga n ta elementdan iborat int seriyasi 
// bor va ushbu fayldagi juft sonlarni teskari tartibda ekranga chiqaring.
int main(){

    FILE *nums = fopen("nums.txt", "r");

    int son[20];
    int a,s=0;
    while (!feof(nums)) {
        fscanf(nums, "%d", &a);
        if(a % 2){
            fscanf(nums, "%d", &son[s]);
            s++;
        }
    }
    for(int i = s-1; i >= 0; i--){
        printf("%d ", son[i]);
    }
        
           
    fclose(nums);
}
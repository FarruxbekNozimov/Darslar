#include <stdio.h>
// Faylga n ta elementdan iborat int seriyasiyozilgan 
// va ushbu fayldagi toq sonlarni kamayish tartibda ekranga chiqaring.

int main(){

    FILE *nums = fopen("nums.txt", "r");

    int son[20];
    int a,s=0;
    while (!feof(nums)) {
        fscanf(nums, "%d", &a);
        if(a % 2){
            son[s] = a;
            s++;    
        }
    }
    //Sorted array
    for (int i = 0; i < s; i++){
        for (int j = i+1; j < s; j++){
            if (son[i] < son[j]){
                int temp = son[i];
                son[i] = son[j];
                son[j] = temp;
            }
        }
        printf("%d ", son[i]);
    }
    
        
           
    fclose(nums);
}
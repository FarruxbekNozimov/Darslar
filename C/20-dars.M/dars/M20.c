#include <stdio.h>
// Quyidagi inter.txt nomli faylda sonlar berilgan. Shu fayldagi sonlarni faqat tublarini olib, 
//shu faylni o'ziga qayta yozib qo'ying (yani, fayldagi qiymatlar yangilanib qolsin)

int main(){

    FILE *nums = fopen("M20.txt", "r+");

    int son,c=0;
    int sons[100];
    while (!feof(nums)){
        fscanf(nums, "%d", &son);
        int a = 0;
        for (int i = 2; i < son; i++){
            if (son % i == 0){
                a++;
            }
        }
        if (a == 0){
            sons[c] = son;
            c++;
            printf("%d ", sons[c-1]);
        }
    }
    nums = fopen("M20.txt", "w");
    for (int i = 0; i < c; i++){
        fprintf(nums, "%d", sons[i]);
    }

    fclose(nums);
}
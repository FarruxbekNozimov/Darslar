#include <stdio.h>
// Foydalanuvchi n sonini kiritadi. 
//Siz esa yangi faylga 1 dan n gacha sonlarni \n tashlab yozing:

int main(){

    FILE *nums = fopen("sonlar.txt", "w");

    int son;
    scanf("%d", &son);
    for (int i = 0; i < son; i++){
        fprintf(nums, "%d\n", i+1);
    }
          
    fclose(nums);
}
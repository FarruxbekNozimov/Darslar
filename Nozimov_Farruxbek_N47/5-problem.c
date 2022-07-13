//Bismillahir Rohmanir Rohim

#include <stdio.h>

int main() {

    FILE *file = fopen("FILES/Text.txt", "r");
    FILE *musbat = fopen("FILES/Text1.txt", "w");
    FILE *manfiy = fopen("FILES/Tex2.txt", "w");
    
    int son,nums[10],a = 0;

    while (fscanf(file,"%d",&son) != EOF){
        if (son > 0){
            fprintf(musbat,"%d ",son);
        }else if (son < 0){
            nums[a] = son;
            a++; 
        }
    }
    for (int i = a-1; i >= 0; i--)
        fprintf(manfiy, "%d ", nums[i]);
    
    return 0;
}
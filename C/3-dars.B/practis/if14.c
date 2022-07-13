#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int son[3];
    for (int i = 0; i < 3; i++){
        printf("%d-sonni kiriting : ", i+1);
        scanf("%d", &son[i]);
    }
    
    if (son[0] < son[1] && son[0] < son[1]){
        if (son[1] > son[2]){
            printf("Eng kattasi >> %d\nEng kichigi >> %d", son[1],son[0]);
        }else{
            printf("Eng kattasi >> %d\nEng kichigi >> %d", son[2],son[0]);
        }
    }else if (son[1] < son[0] && son[1] < son[2]){
        if (son[0] > son[2]){
            printf("Eng kattasi >> %d\nEng kichigi >> %d", son[0],son[1]);
        }else{
            printf("Eng kattasi >> %d\nEng kichigi >> %d", son[2],son[1]);
        }
    }else if (son[2] < son[0] && son[2] < son[1]){
        if (son[0] > son[1]){
            printf("Eng kattasi >> %d\nEng kichigi >> %d", son[0],son[2]);
        }else{
            printf("Eng kattasi >> %d\nEng kichigi >> %d", son[1],son[2]);
        }
    }else{
        printf("Barchasi teng", son[0]);
    }
    

    return 0;
}
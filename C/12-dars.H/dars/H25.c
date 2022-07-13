#include<stdio.h>
#include<stdlib.h>

int main(){
    // system("cls");
    float sonlar[5]={},sonlar1[5]={};
    float sonlar2[5];

    int size = sizeof(sonlar)/sizeof(sonlar[0]);

    for (int i = 0; i < size; i++){
        scanf("%f", &sonlar[i]);
    }
    for (int i = 0; i < size; i++){
        scanf("%f", &sonlar1[i]);
    }
    for (int i = 0; i < size; i++){
        sonlar2[i] = (sonlar[i] + sonlar1[i]);
        if ((int)sonlar2[i] % 2){
            printf("%.1f ", sonlar2[i]/2);
        }else{
            printf("%d ", (int)sonlar2[i]/2);
        }
        
        // printf("%f ", sonlar2[i]);
    }


    return 0;
}
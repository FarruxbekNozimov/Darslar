//Bismillahir Rahmanir Rahim

#include <stdio.h>

//Berilgan arrayning tub elementlarini tub degan 
//arrayga ko'chirish

void GetNumbers();
void Prime_numbers();

int main(){
    int son;
    printf("Nechta son kiritasiz >>> ");
    scanf("%d", &son);

    int tub_sonlar[son];
    int sonlar[son];

    GetNumbers(&sonlar, son);
    Prime_numbers(&sonlar, son,&tub_sonlar);

}
void GetNumbers(int sonlar[], int son){
    printf("Sonlarni kiriting >>> ");
    for (int i = 0; i < son; i++){
        scanf(" %d", &sonlar[i]);
    }
}
void Prime_numbers(int *sonlar, int son, int *tub_sonlar){
    int s = 0;
    for (int i = 0; i < son; i++){
        int sanoq = 0;
        for (int j = 2; j < sonlar[i]/2; j++){
            if (sonlar[i] % j == 0){
                sanoq++;
                break;
            }
        }
        if (sanoq == 0 && sonlar[i] > 1){
            tub_sonlar[s] = sonlar[i];
            printf("%d, ", tub_sonlar[s]);
            s++;
        }
    }
}
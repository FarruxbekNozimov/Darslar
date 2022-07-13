//Bismillahir Rahmanir Rahim

#include <stdio.h>

//Arrayning juft elementlarini yig'indisini xisoblovchi 
//funksiyasini tuzish

int SUMMA (int sonlar[]){
    int sum = 0;
    for (int i = 0; i < 5; i++){
        if (i % 2 == 0){
            sum += sonlar[i];
        }
    }
    return sum;
}

int main (){
    int sonlar[5] = {1,2,3,4,5};

    printf("%d\n", SUMMA(sonlar));

}
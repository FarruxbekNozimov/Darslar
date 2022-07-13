#include <stdio.h>

int main(){

    int sonlar[13] = {5, -4, 34, 60 , 54, -77, 80, -92};
    int size = sizeof(sonlar) / sizeof(sonlar[0]),sanoq=0;

    for (int i = 0; i < size; i++){
        sanoq += sonlar[i];
    }
    printf("%d\n", sanoq);

    

    return 0;
}
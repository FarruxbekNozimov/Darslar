#include <stdio.h> 

int main(){

    int sonlar[10] = {3, 5, -4, 1, 15, 88, -2, -9, 7, -1},son;
    int sonlar1[10] = {};
    int size = sizeof sonlar / sizeof sonlar[0];
    scanf("%d",&son);

    if (son <= size){
        for (int i = 0; i < size; i++){
            if (i == son){
                continue;
            }else{
                sonlar1[i] = sonlar[i];
            }
            printf("%d ,", sonlar1[i]);
        }
    }else{
        printf("bunday indexdagi qiymat yo'q");
    }



    return 0;
}
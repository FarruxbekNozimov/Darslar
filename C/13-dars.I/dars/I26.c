#include <stdio.h>

int main(){
    int sonlar[11] = {},sonlar1[5] = {};
    int size = sizeof(sonlar)/sizeof(sonlar[0]),size1 = sizeof(sonlar1)/sizeof(sonlar1[0]);

    for(int i = 0; i < size; i++) {
        scanf("%d",&sonlar[i]);
    }
    int j = size1-1;
    for (int i = 0; i < size; i++){
        if (i % 2){
            while (1){
                sonlar1[j] = sonlar[i];
                break;
            }
            j--;
        }
    }
    int t = 0;
    for (int i = 0; i < size; i++){
        if (i % 2){
            while (1){
                sonlar[i] = sonlar1[t];
                break;
            }
            t++;
        }
    }
    for (int i = 0; i <= size-1; i++){
        printf("%d ", sonlar[i]);
    }
    return 0;
}
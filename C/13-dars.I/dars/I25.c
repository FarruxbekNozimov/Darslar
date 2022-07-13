#include <stdio.h>


int main(){
    int sonlar[20] = {};
    // int yarim[5],yarim1[5];
    int size = sizeof(sonlar)/sizeof(sonlar[0]);

    for(int i = 0; i < size/2; i++) {
        scanf("%d",&sonlar[i]);
    }    
    for(int i = size-1; i >= size/2; i--) {
        scanf("%d",&sonlar[i]);
    }    
    for(int i = 0; i < size; i++) {
        printf("%d ",sonlar[i]);
    }    
    
    // for (int i = 0; i < size/2; i++) {
    //     yarim[i] = sonlar[i];
    //     printf("%d ", yarim[i]);
    // }   

    // for (int i = size-1; i >= size/2; i--) {
    //     yarim1[i] = sonlar[i];
    //     printf("%d ", yarim1[i]);
    // }

    return 0;
}
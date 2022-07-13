#include <stdio.h>
#include <limits.h>


int main(){
    int sonlar[5],  i;
    int max1, max2;


    printf(">>> ");
    for(i=0; i<5; i++) {
        scanf("%d", &sonlar[i]);
    }

    max1 = max2 = INT_MIN;

    for(i=0; i<5; i++){
        if(sonlar[i] > max1){
            max2 = max1;
            max1 = sonlar[i];
        }
        else if(sonlar[i] > max2 && sonlar[i] < max1){
            max2 = sonlar[i];
        }
    }

    printf("First largest = %d\n", max1);
    printf("Second largest = %d", max2);

    return 0;
}
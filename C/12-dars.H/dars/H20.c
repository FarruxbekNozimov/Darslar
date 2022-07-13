#include<stdio.h>

int main(){
    int a[50],  i, max, min;

    for(i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }
    max = a[0]; 
    for(i = 1; i < 10; i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    min = a[0];
    for(i = 1; i < 10; i++){
        if(min>a[i]){
            min = a[i];
        }
    }
    printf("%d\n", max-min);
    return 0;
}
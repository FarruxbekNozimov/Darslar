#include <stdio.h>


int main(){
    int sonlar[10] = {3, 5, -4, 0, 15, 88, -2, -9, 7, -1};
    int element, index, i;

    scanf("%d %d",&index,&element);

    if(index <= 10 && index >= 0){
        for(i = 10; i > index; i--){
            sonlar[i] = sonlar[i-1];
        }
        sonlar[index] = element;

        for(i = 0; i <= 10; i++)
            printf("%d ", sonlar[i]);
    }else{
        printf("Dang !!!\n");
    }
    return 0;
}
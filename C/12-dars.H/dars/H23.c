#include<stdio.h>

int main(){
    int sonlar[100],son;
    scanf("%d", &son);

    for(int i = 1; i <= son; i++){
        sonlar[i] = i;
        printf("%d ", sonlar[i]);
    }

    return 0;
}
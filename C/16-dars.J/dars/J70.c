#include <stdio.h>
#define size 10

int jami(int qosh[]){
    int qoshish = 0;
    for (int i = 0; i < size; i++) qoshish += qosh[i];
    return qoshish;    
}

int main(){
    int sonlar[size];
    for (int i = 0; i < size; i++) scanf("%d",&sonlar[i]);
    printf("%d",jami(sonlar));
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int num;
    printf("Son kiriting : ");
    scanf("%d", &num);
    
    if (80<num && num<=100){
        printf("5 baho\n");
    }else if (60<num && num<=80){
        printf("4 baho\n");
    }else if (40<num && num<=60){
        printf("3 baho\n");
    }else if (20<num && num<=40){
        printf("2 baho\n");
    }else{
        printf("Siz bebahosiz\n");
    }
}

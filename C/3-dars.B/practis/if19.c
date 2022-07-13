#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int son1, son2, son3, son4;

    printf("1-sonni kiriting : ");
    scanf("%d", &son1);
    printf("2-sonni kiriting : ");
    scanf("%d", &son2);
    printf("3-sonni kiriting : ");
    scanf("%d", &son3);
    printf("4-sonni kiriting : ");
    scanf("%d", &son4);

    if (son1 == son2 && son1 == son3){
        printf("Tartib raqami : 4");
    }else if (son2 == son3 && son2 == son4){
        printf("Tartib raqami : 1");
    }else if (son3 == son4 && son3 == son1){
        printf("Tartib raqami : 2");
    }else if (son4 == son1 && son4 == son2){
        printf("Tartib raqami : 3");
    }else{
        printf("Teng emas ");
    }



    
    return 0; 

}
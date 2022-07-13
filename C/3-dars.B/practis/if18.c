#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int son[2];
    for (int i = 0; i < 3; i++){
        printf("%d-sonni kiriting : ", i+1);
        scanf("%d", &son[i]);
    }

    if (son[0] == son[1]){
        printf("Tartib raqami : 3");
    }else if (son[0] == son[2]){
        printf("Tartib raqami : 2");
    }else if (son[1] == son[2]){
        printf("Tartib raqami : 1");
    }else{
        printf("Teng emas ");
    }

    return 0; 

}
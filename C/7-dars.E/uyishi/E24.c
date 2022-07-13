#include <stdio.h>

int main(){

    int son,i, juft=0,toq=0;
    printf(">>> ");
    scanf("%d", &son);  //52483
    do {
        i = son % 10;
        if (i % 2){
            toq += i;
        } else{
            juft += i;
        }
        son /= 10;
    } while(son != 0);

    printf(">>> %d ", juft - toq);

    return 0;

}
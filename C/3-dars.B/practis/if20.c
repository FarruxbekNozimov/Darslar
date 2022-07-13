#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int a,b,c;

    printf("A ni kriting: ");
    scanf("%d", &a);
    printf("B ni kiritng: ");
    scanf("%d", &b);
    printf("C ni kiritng: ");
    scanf("%d", &c);

    if (a>b){
        if (b>c){
            printf("%d", a-b);
        }else{
            printf("%d", a-c);
        }
    }else{
        if (a>c){
            printf("%d", b-a);
        }else{
            printf("%d", b-c);
        }
    }


}
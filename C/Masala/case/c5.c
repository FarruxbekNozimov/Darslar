#include <stdio.h>

int main(){

    //A va B butun son beriladi. ular ustida mantiqiy amallarni bajaruvchi
    //dastur tuzing.--> +,-,*,/

    int a,b;
    char c;
    printf(">> ");
    scanf("%d %c %d", &a, &c, &b);

    switch (c){
    case '+':
        printf("%d + %d = %d\n", a, b, a+b);
        break;
    case '-':
        printf("%d - %d = %d\n", a, b, a-b);
        break;
    case '*':
        printf("%d * %d = %d\n", a, b, a*b);
        break;
    case '/':
        printf("%d / %d = %d\n", a, b, a/b);
        break;    
    default:
        printf("Xato\n");
        break;
    }







}
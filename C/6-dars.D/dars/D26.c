#include <stdio.h>

int main() {

    int xy,son,almash,a=0,f,l;

    printf("Enter a number: ");
    scanf("%d",&son);

    xy = son;
    l = son % 10;
    while (son > 10){
        son = son /10;
    }
    f = son;
    son = xy/10;
    while (son > 10){
        a = a * 10 + son % 10;
        son = son/10;
    }
    almash = l;
    while (a > 0){
        almash = almash * 10 + a % 10;
        a = a / 10;
    }    
    almash = almash * 10 + f;

    printf("%d",almash);    
    return 0;
}
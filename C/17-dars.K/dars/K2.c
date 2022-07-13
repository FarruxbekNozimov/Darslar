#include <stdio.h> 

int s = 0;

int son(int raqam){
    if (raqam != 0){
        s += raqam%10;
        son(raqam/10);
    }
    return s;
}
int main(){
    int a;
    scanf("%d",&a);
    printf("%d",son(a));
}


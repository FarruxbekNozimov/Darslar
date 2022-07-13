#include <stdio.h> 

int num = 1;

int son(int raqam){
    if (raqam > 9){
        num++;
        son(raqam /= 10);
    }    
}
int main(){
    int a;
    scanf("%d",&a);
    son(a);
    printf("%d",num);
}

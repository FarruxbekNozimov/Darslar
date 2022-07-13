#include <stdio.h>

int main(){

    int a,b=1;
    scanf("%d",&a);
    int sum = 0;
    while (b < a){
        sum +=b;
        b++;
    }
    printf("%d",sum);

    return 0;

}
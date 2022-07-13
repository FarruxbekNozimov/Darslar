#include <stdio.h>

int main(){

    // ----------------Vazifa-13--------------------------
    int son = 20;

    do{
        if (son % 2 == 0 && son % 10){
            printf("%d ", son);
        }
        son++;
    } while (son < 420);

    // ----------------Vazifa-14--------------------------
    int son,a=0;
    scanf("%d", &son);
    do{
        printf("%d ",a*a);
        a++;
    }while (a <= son);

    // ----------------Vazifa-15--------------------------
    int son = 1,n;
    scanf("%d",&n);
    do {
        printf("%d ",son*son);
        ++son;
    } while (son*son < n);

   

    return 0;
}
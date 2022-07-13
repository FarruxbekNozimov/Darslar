#include <stdio.h>

int main(){
    // ----------------Vazifa-7--------------------------
    int son = 1;

    do{
        if (son % 2 == 0){
            printf("%d ", son);
        }
        son++;
    } while (son < 140);

    // ----------------Vazifa-8--------------------------
    int son = 100;

    do{
        if (son % 2){
            printf("%d ", son);
        }
        son--;
    } while (son > 240);

    // ----------------Vazifa-9--------------------------
    int son = 40;

    do{
        if (son % 7 == 0){
            printf("%d ", son);
        }
        son++;
    } while (son > 180);

    // ----------------Vazifa-10--------------------------
    int son = 90;

    do{
        if (son % 25 == 0){
            printf("%d ", son);
        }
        son++;
    } while (son > 210);

    // ----------------Vazifa-11--------------------------
    int son = 25;

    do{
        if (son % 5 == 0 && son % 9 == 0){
            printf("%d ", son);
        }
        son++;
    } while (son > 690);

    // ----------------Vazifa-12--------------------------
    int son = 1;

    do{
        if (son % 3 == 0 && son % 9 == 0 && son % 11 == 0){
            printf("%d ", son);
        }
        son++;
    } while (son > 4000);
 

}
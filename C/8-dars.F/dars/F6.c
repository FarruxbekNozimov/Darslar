#include <stdio.h>

int main(){

    //--------------VAZIFA-7-----------------

    for (int i = 1; i <= 140; i++){
        if (i % 2 == 0){
            printf("%d\t", i);
        }
    }

    //--------------VAZIFA-8-----------------

    for (int i = 100; i <= 240; i++){
        if (i % 2){
            printf("%d\t", i);
        }
    }

    //--------------VAZIFA-9-----------------

    for (int i = 40; i <= 180; i++){
        if (i % 7 == 0){
            printf("%d\t", i);
        }
    }

    //--------------VAZIFA-10-----------------

    for (int i = 90; i <= 210; i++){
        if (i % 25   == 0){
            printf("%d\t", i);
        }
    }

    //--------------VAZIFA-11-----------------

    for (int i = 25; i <= 690; i++){
        if (i % 5 == 0 && i % 5 == 0){
            printf("%d\t", i);
        }
    }

    //--------------VAZIFA-12-----------------

    for (int i = 1; i <= 4000; i++){
        if (i % 11 == 0 && i % 9 == 0){
            printf("%d\t", i);
        }
    }



    return 0;
}
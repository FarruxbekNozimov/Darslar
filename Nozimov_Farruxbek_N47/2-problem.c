//Bismillahir Rohmanir Rohim

#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[10] = {1,-3,0,-4,5,8,2,-7,0,7};
    int len = sizeof(array) / sizeof(array[0]);
    int toq_musbat[0],s=0;

    for (int i = 0; i < len ; i++){
        if (array[i] % 2 && array[i] > 0){
            toq_musbat[s] = array[i];
            printf("%d\n",toq_musbat[i]);
            s++;
        }
    }


    return 0;
}
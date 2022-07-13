#include <stdio.h>

int main(){
    int sonlar[6] = {45, -4, 0, 35, 22, -7};
    int size = sizeof(sonlar) / sizeof(sonlar[0]),a;

    for (int i = 0; i < size; i++){
        a = sonlar[i];
    }
    printf("%d\n", a);
    
    return 0;
}
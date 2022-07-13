#include <stdio.h>

int main(){
    int sonlar[9] = {-8, 2, 5, 6, 1, 447, 55, 24, 26};
    printf("%d\n", sonlar[0]);
    int size = sizeof(sonlar) / sizeof(sonlar[0]),first;

    for (int i = 0; i < size; i++){
        first = sonlar[i];
    }
    printf("%d\n", first);
    
    return 0;
}
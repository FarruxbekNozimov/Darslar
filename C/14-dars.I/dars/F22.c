#include <stdio.h>

int main() {

    int t = 11,q = 13,m = 17;
    int jami = 100;
    for (int i = 1; i < m; i++){
        for (int j = 1; j < q; j++){
            for (int k = 1; k < t; k++){
                if (i*m + j*q + k*t == jami){
                    printf("%d kg mol\n", i);
                    printf("%d kg qo'y\n", j);
                    printf("%d kg tovuq\n", k);
                }
            }
            
        }
        
    }
    

    return 0;
}
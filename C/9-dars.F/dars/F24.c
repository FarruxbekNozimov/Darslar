    #include <stdio.h>

    int main(){
        for (int i = 45; i < 255; i++){
            if (i % 16 == 0 && i % 48){
                printf("%d\n", i);  
            }
        }
    }
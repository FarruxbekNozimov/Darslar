#include <stdio.h>

void play(){
    int son;
    printf(">>> ");
    scanf("%d", &son);
    if (son > 0){
        printf("Try again\n");
        play();
    }else
        printf("Finished\n");
    
    
}
int main() {
    play();
    return 0;
}


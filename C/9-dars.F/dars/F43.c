#include <stdio.h>

int main(){
    char game;
    printf("O'yinni davom ettirasizmi: [h/y] ");
    scanf("%c", &game);

    for ( ; ; ){
        if (game == 'y'){
            break;
        }else if(game == 'h'){
            printf("O'yinni davom ettirasizmi: [h/y] ");
            scanf(" %c", &game);
        }else{
            printf("Dang!");
            break;
        }

    }
    


    return 0;
}   
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char numbers[4][4][3] = {
    {"1 ", "2 ", "3 ", "4 "},
    {"5 ", "6 ", "7 ", "8 "},
    {"9 ", "10", "11", "12"},
    {"13", "14", "15", "  "}
};

char targets[4][4][3] = {
    {"1 ", "2 ", "3 ", "4 "},
    {"5 ", "6 ", "7 ", "8 "},
    {"9 ", "10", "11", "12"},
    {"13", "14", "15", "  "}
};

void show_board();
int input_is_correct();
void move_right();
void move_left();
void move_up();
void move_down();
int game_over();

// D -> Move RIGHT;
// A -> Move LEFT;
// W -> Move TOP;
// S -> Move DOWN;


int main(){
    char move;
    show_board();
    scanf("%c", &move);

    while (input_is_correct(&move)){
        if (move == 'd' || move == 'D'){
            move_right();
        } else if (move == 'a' || move == 'A'){
            move_left();
        } else if (move == 'w' || move == 'W'){
            move_up();
        } else if (move == 's' || move == 'S'){
            move_down();
        }
        show_board();
        scanf("%c", &move);
    }
    
    
}

void show_board(){
    // system("cls");
    int q = 0;
    for (int i = 0; i < 4; i++){
        for ( ; q < 21; q++){
            if (q % 5)
                printf("-");
            else
                printf("+");                
            (q == 20) ? printf("\n") : printf("");
        }
        printf("| ");
        for (int j = 0; j < 4; j++){
            for (int k = 0; k < 3; k++){
                printf("%c", numbers[i][j][k]);
            }
            printf(" | ");
        }
        printf("\n");
        for (int k = 0; k < 21; k++){
            if (k % 5)
                printf("-");
            else
                printf("+");
                
        }
        printf("\n");   
    }
}

int input_is_correct(char *input_val){
    return (input_val[0] == 'w' || input_val[0] == 'a' || input_val[0] == 's' || input_val[0] == 'd' ||
            input_val[0] == 'W' || input_val[0] == 'A' || input_val[0] == 'S' || input_val[0] == 'D') ? 1 : 0;
}

void move_right(){
    int a=0;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            for (int k = 0; k < 3; k++){
                // if (numbers[i][0][0] != ' ' && numbers[i][0][1] != ' '){
                    if (numbers[i][j][k] == ' ' && numbers[i][j][k+1] == ' ' ){
                        numbers[i][j][k+1] = numbers[i][j][k-2];
                        numbers[i][j][k-2] = ' ';
                        numbers[i][j][k] = numbers[i][j][k-3];
                        numbers[i][j][k-3] = ' ';
                        a = 1;
                    }                    
                // }                
            }
            if (a) break;
        }
    }    
    
}

void move_left(){
    int a=0;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            for (int k = 0; k < 3; k++){
                // if (numbers[i][3][0] != ' ' && numbers[i][3][1] != ' '){
                    if (numbers[i][j][k] == ' ' && numbers[i][j][k-1] == ' ' ){
                        numbers[i][j][k-1] = numbers[i][j][k+2];
                        numbers[i][j][k+2] = ' ';
                        numbers[i][j][k] = numbers[i][j][k+3];
                        numbers[i][j][k+3] = ' ';
                        a = 1;
                    }                    
                // }                
            if (a) break;
            }
        }
    }    
}

void move_up(){
    int a=0;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            for (int k = 0; k < 3; k++){
                if (numbers[i][j][k] == ' ' && numbers[i][j][k+1] == ' ' ){
                    printf("%d %d %d\n", i, j, k);
                    numbers[i][j][k] = numbers[i+1][j][k];
                    numbers[i][j][k+1] = numbers[i+1][j][k+1];
                    numbers[i+1][j][k] = ' ';
                    numbers[i+1][j][k+1] = ' ';
                    a = 1;
                }                    
            }
            if (a) break;
        }
    }    

}

void move_down(){
    int a=0;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            for (int k = 0; k < 3; k++){
                if (numbers[i][j][k] == ' ' && numbers[i][j][k-1] == ' ' ){
                    printf("%d %d %d\n", i, j, k);
                    numbers[i][j][k] = numbers[i-1][j][k];
                    numbers[i][j][k-1] = numbers[i-1][j][k-1];
                    numbers[i-1][j][k] = ' ';
                    numbers[i-1][j][k-1] = ' ';
                    a = 1;
                }                    
            }
            if (a) break;
        }
    }    
}

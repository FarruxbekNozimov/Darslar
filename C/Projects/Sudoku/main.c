#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int sanoq = 3;
char answers[9][9] = {
    {'2','1','9','5','4','3','6','7','8'},
    {'5','4','3','8','7','6','9','1','2'},
    {'8','7','6','2','1','9','3','4','5'},
    {'4','3','2','7','6','5','8','9','1'},
    {'7','6','5','1','9','8','2','3','4'},
    {'1','9','8','4','3','2','5','6','7'},
    {'3','2','1','6','5','4','7','8','9'},
    {'6','5','4','9','8','7','1','2','3'},
    {'9','8','7','3','2','1','4','5','6'}
};
char kvadrat[9][9] = {
    {'2',' ','9',' ',' ',' ','6',' ',' '},
    {' ','4',' ','8','7',' ',' ','1','2'},
    {'8',' ',' ',' ','1','9',' ','4',' '},
    {' ','3',' ','7',' ',' ','8',' ','1'},
    {' ','6','5',' ',' ','8',' ','3',' '},
    {'1',' ',' ',' ','3',' ',' ',' ','7'},
    {' ',' ',' ','6','5',' ','7',' ','9'},
    {'6',' ','4',' ',' ',' ',' ','2',' '},
    {' ','8',' ','3',' ','1','4','5',' '}
};
char const_box[9][9] = {
    {'2',' ','9',' ',' ',' ','6',' ',' '},
    {' ','4',' ','8','7',' ',' ','1','2'},
    {'8',' ',' ',' ','1','9',' ','4',' '},
    {' ','3',' ','7',' ',' ','8',' ','1'},
    {' ','6','5',' ',' ','8',' ','3',' '},
    {'1',' ',' ',' ','3',' ',' ',' ','7'},
    {' ',' ',' ','6','5',' ','7',' ','9'},
    {'6',' ','4',' ',' ',' ',' ','2',' '},
    {' ','8',' ','3',' ','1','4','5',' '}
};

void show_board();
void get_values();
void play();
int main(){
    play();
}

void red () {
  printf("\033[0;31m");
}
void yellow() {
  printf("\033[0;33m");
}

void show_board(){
    system("cls");
    red();
    printf("***************************************************************\n");
    printf("               SUDOKU O'YINIGA XUSH KELIBSIZ                  \n");
    printf("***************************************************************\n\n");
    yellow();
    printf("      ||     |     |     ||     |     |     ||     |     |     |\n");
    printf("  *   ||  0  |  1  |  2  ||  3  |  4  |  5  ||  6  |  7  |  8  |\n");
    printf("______||_____|_____|_____||_____|_____|_____||_____|_____|_____|\n");
    printf("______  _____ _____ _____  _____ _____ _____  _____ _____ _____ \n");
    printf("      ||     |     |     ||     |     |     ||     |     |     |\n");
    printf("  0   ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  |\n", kvadrat[0][0], kvadrat[0][1], kvadrat[0][2], kvadrat[0][3], kvadrat[0][4],kvadrat[0][5],kvadrat[0][6],kvadrat[0][7],kvadrat[0][8]);
    printf("______||_____|_____|_____||_____|_____|_____||_____|_____|_____|\n");
    printf("      ||     |     |     ||     |     |     ||     |     |     |\n");
    printf("  1   ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  |\n", kvadrat[1][0], kvadrat[1][1], kvadrat[1][2], kvadrat[1][3], kvadrat[1][4],kvadrat[1][5],kvadrat[1][6],kvadrat[1][7],kvadrat[1][8]);
    printf("______||_____|_____|_____||_____|_____|_____||_____|_____|_____|\n");
    printf("      ||     |     |     ||     |     |     ||     |     |     |\n");
    printf("  2   ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  |\n", kvadrat[2][0], kvadrat[2][1], kvadrat[2][2], kvadrat[2][3], kvadrat[2][4],kvadrat[2][5],kvadrat[2][6],kvadrat[2][7],kvadrat[2][8]); 
    printf("______||_____|_____|_____||_____|_____|_____||_____|_____|_____|\n");
    printf("______  _____ _____ _____  _____ _____ _____  _____ _____ _____ \n");
    printf("      ||     |     |     ||     |     |     ||     |     |     |\n");
    printf("  3   ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  |\n", kvadrat[3][0], kvadrat[3][1], kvadrat[3][2], kvadrat[3][3], kvadrat[3][4],kvadrat[3][5],kvadrat[3][6],kvadrat[3][7],kvadrat[3][8]);
    printf("______||_____|_____|_____||_____|_____|_____||_____|_____|_____|\n");
    printf("      ||     |     |     ||     |     |     ||     |     |     |\n");
    printf("  4   ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  |\n", kvadrat[4][0], kvadrat[4][1], kvadrat[4][2], kvadrat[4][3], kvadrat[4][4],kvadrat[4][5],kvadrat[4][6],kvadrat[4][7],kvadrat[4][8]);
    printf("______||_____|_____|_____||_____|_____|_____||_____|_____|_____|\n");
    printf("      ||     |     |     ||     |     |     ||     |     |     |\n");
    printf("  5   ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  |\n", kvadrat[5][0], kvadrat[5][1], kvadrat[5][2], kvadrat[5][3], kvadrat[5][4],kvadrat[5][5],kvadrat[5][6],kvadrat[5][7],kvadrat[5][8]); 
    printf("______||_____|_____|_____||_____|_____|_____||_____|_____|_____|\n");
    printf("______  _____ _____ _____  _____ _____ _____  _____ _____ ______\n");
    printf("      ||     |     |     ||     |     |     ||     |     |     |\n");
    printf("  6   ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  |\n", kvadrat[6][0], kvadrat[6][1], kvadrat[6][2], kvadrat[6][3], kvadrat[6][4],kvadrat[6][5],kvadrat[6][6],kvadrat[6][7],kvadrat[6][8]); 
    printf("______||_____|_____|_____||_____|_____|_____||_____|_____|_____|\n");
    printf("      ||     |     |     ||     |     |     ||     |     |     |\n");
    printf("  7   ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  |\n", kvadrat[7][0], kvadrat[7][1], kvadrat[7][2], kvadrat[7][3], kvadrat[7][4],kvadrat[7][5],kvadrat[7][6],kvadrat[7][7],kvadrat[7][8]);
    printf("______||_____|_____|_____||_____|_____|_____||_____|_____|_____|\n");
    printf("      ||     |     |     ||     |     |     ||     |     |     |\n");
    printf("  8   ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  |\n", kvadrat[8][0], kvadrat[8][1], kvadrat[8][2], kvadrat[8][3], kvadrat[8][4],kvadrat[8][5],kvadrat[8][6],kvadrat[8][7],kvadrat[8][8]);
    printf("______||_____|_____|_____||_____|_____|_____||_____|_____|_____|\n");
}    
void get_values(){
    int v1,v2;
    char number;
    while (1){
        printf("\nQator(-) va ustunni(|) kiriting (? - ?) >>> ");
        scanf("%d %d", &v1, &v2);
        if (v1 < 0 || v1 > 8 || v2 < 0 || v2 > 8){
            continue;
        }else{
            if (const_box[v1][v2] != ' '){
                printf("\nBu yerni o'zgartirish mumkin emas\n");
                Sleep(1000);
                continue;
            }
            break;
        }
    }
    while (1){
        printf("\nSonni kiriting (%d - %d) >>> ", v1, v2);
        scanf(" %c", &number);
        if (number >= '1' || number <= '9'){
            printf("%c", number);
            if (answers[v1][v2] == number){
                kvadrat[v1][v2] = number;
                break;
            }else{
                kvadrat[v1][v2] = number;
                sanoq--;
                printf("\nNoto'g'ri Javob\nSizda %d imkoniyat qoldi.", sanoq);
                Sleep(1000);
                break;
            }
        }else{
            printf("\nSizda %d imkoniyat qoldi.", sanoq);
            Sleep(1000);
            printf("Xomkalla 1-8 gacha kirit !!!");
            continue;
        }
    }

    show_board();
}

void play(){

    while (1){
        show_board();
        get_values();
        if (sanoq == 0){
            printf("\nYutqizdingiz !!!");
            break;
        }
        int a = 81;
        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
                if (kvadrat[i][j] == answers[i][j])
                    a--;
        if (a == 0){
            printf("\nYutdingiz !!!");
            break;
        }
    }
        
}
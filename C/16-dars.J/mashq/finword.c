char getRandomCharacter();
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char getRandomCharacter(){
    int r = (rand() % 26) + 65;
    return (char)r;
}

int main(void){

    int randomNum;
    char wordSearch[11][11];
    const char *takenWords[4];
    const char *words[20]={"DOG", "CAT", "ELEPHANT", "CROCODILE", "HIPPOPOTAMUS", "TORTOISE", "TIGER", "FISH", "SEAGULL", "SEAL", "MONKEY", "KANGAROO", "ZEBRA", "GIRAFFE", "RABBIT", "HORSE", "PENGUIN", "BEAR", "SQUIRREL", "HAMSTER"};

    printf("\n\tA\t\tB\t\tC\t\tD\t\tE\t\tF\t\tG\t\tH\t\tI\t\tJ\n");
    for(int i=1; i<11; i++){
        printf("\n%d\t", i-1);

        for(int j=0; j<10; j++){
            char c=getRandomCharacter();
            wordSearch[i][j]=c;
            printf("%c\t\t", *(&(wordSearch[i][j])));
        }
        printf("\n\n");
    }

    srand(time(NULL));

    for(int i=0; i<4; i++){
        int flag=0;
        do{
            randomNum = (rand()%20);
            takenWords[i]=words[randomNum];
            flag=0;
            for(int j=0;j<i;j++){
                if(strcmp(words[randomNum],takenWords[j])==0)flag=1;
            }
        }while(flag);
        //wordSearch[(rand()%20)+1][(rand()%20)+1];
        printf("%s\n", words[randomNum]);
    }
    getchar();
    return 0;
}
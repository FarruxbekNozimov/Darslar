#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int target;
void past(){
    printf("\n");
}
int random(){
    srand(time(NULL));
    int target = rand()%3;
    return target;
}
int checkharf(char h){
    return (h >='a' && h <= 'z' || h >='A' && h <= 'Z');
}
char kattaharf(char symbol){
    if (symbol >='a' || symbol <= 'z') symbol -= 32;
    return symbol;
}

void game(char javob[], char chiziq[],char harf,char savol[]){ 
    char ha = '0';
    while(ha == 'h' || ha == '0'){
        random();
        int sanoq = 0,a = 0,f = 0;
        for (int i = 0; savol[i] != '\0'; i++){
            printf("%c",savol[i]);
        }
        past();
        for (int i = 0; javob[i] != '\0'; i++){
            a++;
            printf("%c",chiziq[i]);
        }
        while (1){
            sanoq++;
            printf("\n>>> ");
            scanf(" %c",&harf);
            if (checkharf(harf) == 0){
                printf("Harf kiriting !!!");
                continue;
            }
            
            for (int i = 0; javob[i] != '\0'; i++){
                if (harf == javob[i]){
                    chiziq[i] = javob[i];
                }
            }
            for (int i = 0; javob[i] != '\0'; i++){
                if (chiziq[i] == '-'){
                    printf("%c",chiziq[i]);
                }else{
                    printf("%c",kattaharf(chiziq[i]));
                }
            }       
            if(sanoq == a+3){
                printf("\nYutqizdingiz !!!\n");
                break;
            }
            if (strcmp(chiziq, javob)==0){
                printf("\nYutdingiz");
                break;
            }else{
                printf("Teng emas");
            }
        }    
        printf("\nDavom ettirishni xoxlaysizmi[h][y]");    
        scanf(" %c",&ha);
    }

    

}

int main(){

    if (random() == 0){
        char harf;
        char chiziq[]="------";
        char javob[] = "farrux";
        char savol[] = "Ismim nima ? ";

        game(javob, chiziq, harf, savol);

    }else if (random() == 1){
        char harf;
        char chiziq[]="--------";
        char javob[] = "toshkent";
        char savol[] = "O'zbekiston poytaxti ? ";
        
        game(javob, chiziq, harf, savol);

    }else if (random() == 2){
        char harf;
        char chiziq[]="------";
        char javob[] = "moskva";
        char savol[] = "Rossiya poytaxti qayer ?";
        game(javob, chiziq, harf, savol);
    }

    return 0;
}


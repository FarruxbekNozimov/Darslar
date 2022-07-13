#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int num1,num2,natija;
    char s;
    printf("1-son kiriting : ");
    scanf("%d", &num1);
    printf("Belgi kiriting : ");
    scanf(" %c", &s);
    printf("2-son kiriting : ");
    scanf("%d", &num2);

    if (s == '+'){
        natija = num1 + num2;
        printf("Natij : %d\n", natija);
    }else if (s == '-'){
        natija = num1 - num2;
        printf("Natij : %d\n", natija);
    }else if (s == '*'){
        natija = num1 * num2;
        printf("Natij : %d\n", natija);
    }else if (s == '/'){
        natija = num1 / num2;
        printf("Natij : %d\n", natija);
    }else{
        printf("Bunday operator yo'q\n");
    }
    
    return 0;
}

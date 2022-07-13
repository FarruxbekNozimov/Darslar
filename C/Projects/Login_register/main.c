#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

char name[20];
char username[20];
char password[20];
char password_check[20];
char username_check[20];
char password_confirm[20];

void clean(){
    system("cls");
}
int check_password(char password[], char password_confirm[]){
    if(strcmp(password, password_confirm) == 0){
        return 1;
    }else{
        return 0;
    }
}
void welcome(){
    clean();
    printf("********************************************************\n");
    printf("\t\tAssalomu alaykum %s\n\t\tXush kelibsiz", name);

}
void login_user(){
    if (strlen(username) == 0 || strlen(password) == 0){
        clean();
        printf("Siz hali ro'yxatdan o'tmagansiz\n");
        Sleep(1000);
    }else{
        clean();
        printf("Login kiriting\t\t\t: ");
        scanf("%s", username_check);
        while (check_password(username_check,username) == 0){
            printf("\n\tLogin noto'g'ri, Yana urinib ko'ring !!!\n\n");
            Sleep(1000);
            printf("Login kiriting\t\t: ");
            scanf("%s", username_check);
        }
        printf("Parolni kiriting\t\t: ");
        scanf("%s", password_check);
        while (check_password(password_check,password) == 0){
            printf("\n\tParol noto'g'ri, Yana urinib ko'ring !!!\n\n");
            Sleep(1000);
            printf("Parol kiriting\t\t: ");
            scanf("%s",password_check);
        }
        welcome();
        getch();

    }


}


void register_user() {
    clean();
    printf("Ismingizni kiriting\t\t: ");
    scanf("%s", name);
    printf("Login kiriting\t\t\t: ");
    scanf("%s", username);
    printf("Parolni kiriting\t\t: ");
    scanf("%s", password);
    printf("Parolni tasdiqlash\t\t: ");
    scanf("%s", password_confirm);
    while (check_password(password, password_confirm) == 0){
        printf("\n\tParolni tasdiqlash noto'g'ri !!!\n\n");
        Sleep(1000);
        printf("Parolni tasdiqlash\t\t: ");
        scanf("%s", password_confirm);
    }
    printf("\n\tSiz muvaffaqiyatli ro'yxatdan o'tdingiz...");
    getch();

}
void first_page(){
    while (1){
        int choice = 0;
        clean();
        printf("********************************************************\n");
        printf("*                                                      *\n");    
        printf("*                  XUSH KELIBSIZ.......                *\n");    
        printf("*                 1 - Ro'yhatdan o'tish                *\n");    
        printf("*                 2 - Kirish                           *\n");    
        printf("*                 3 - Chiqish                          *\n");    
        printf("*                                                      *\n");    
        printf("********************************************************\n");
        printf(">>> ");
        scanf("%d", &choice);
        if (choice == 1){
            register_user();
        }
        else if (choice == 2){
            login_user();
        }else if (choice == 3){
            printf("\n\t\tXAYR !!!");
            Sleep(1000);
            break;
        }
    }
    
    
}

int main() {

    first_page();
    

}

#include <stdio.h> 
#include <string.h> 


void matn(char soz[],int son){
    printf("%c",soz[son]);
    if (son >= 1)
        matn(soz,son-1);
}
int main(){
    char soz[50];
    scanf("%s",soz);
    int uzun = strlen(soz);
    matn(soz,uzun);

}


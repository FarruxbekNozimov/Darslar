//Bismillahir Rahmanir Rahim

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char soz[30];
    fgets(soz,30,stdin);
    int olcham=strlen(soz);
    char yordamchi=soz[0];
    soz[0]=soz[olcham-2];
    soz[olcham-2]=yordamchi;
    yordamchi=soz[1];
    soz[1]=soz[olcham-3];
    soz[olcham-3]=yordamchi;
    printf("%s",soz);
    return 0;
}
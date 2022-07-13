#include <stdio.h>

int is_equal(char soz[],char soz1[]){
    int k=0,l=0;
    for (int i = 0; soz[i] != '\0'; i++){
        l++;
        if (soz[i] == soz1[i]) k++;
        
    }
    return (k==l);
}

int main(){
    char soz[10],soz1[10];
    scanf("%s %s",soz,soz1);

    printf("%d",is_equal(soz,soz1));
    return 0;
}
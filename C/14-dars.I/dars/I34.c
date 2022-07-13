#include <stdio.h>
#include <string.h> 
#define SIZE 20

int main(){

    char soz[SIZE];
    int quti = 0,a=0;   
    fgets(soz,SIZE,stdin);
    
    for (int i = 0; soz[i] != '\0'; i++){
        quti++;
    }
    for (int i = 0; i < quti; i++){
        if (soz[i] >= 48 && soz[i] <= 57){
            a++;
        }
    } 
    printf("%d",a);
    return 0;
} 
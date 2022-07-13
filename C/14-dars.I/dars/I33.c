#include <stdio.h>
#include <string.h> 
#define SIZE 20

int main(){

    char soz[SIZE],soz1[SIZE];
    int quti = 0,a=0;   
    fgets(soz,SIZE,stdin);
    fgets(soz1,SIZE,stdin);
    
    for (int i = 0; soz[i] != '\0'; i++){
        quti++;
    }
    for (int i = 0; i < quti; i++){
        if (soz[i] == soz1[i]){
            a++;
        }
    }
    if (a == quti){
        printf("YES");
    }
    else{
        printf("NO");
    }
    

    return 0;
} 
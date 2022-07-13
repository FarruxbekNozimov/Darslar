#include <stdio.h>
#include <ctype.h>

void teskari_harf(char *soz){
    for (int i = 0; soz[i] != '\0'; i++)
        if (isupper(soz[i]))
            soz[i] += 32;
        else if (islower(soz[i]))
            soz[i] -= 32;
        // if ('a' <= soz[i] && soz[i] <= 'z') 
        //     soz[i] -= 32;
        // else if ('A' <= soz[i] && soz[i] <= 'Z')
        //     soz[i] += 32;
     
}

int main(){
    char gap[] = "faRrUx";

    teskari_harf(gap);
    
    printf("%s\n", gap);

    return 0;
}
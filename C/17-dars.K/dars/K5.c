#include <stdio.h>
#include <string.h>
#include <ctype.h>

int x=0;

int IsUpper(char soz[], int length) {
    if(isupper(soz[x]))
        return soz[x];
    if(x != length){
        x++;
        IsUpper(soz, length);
    }else{
        return 'a';
    }
}
int main() {
    char a[50];
    fgets(a, 50, stdin);
    int size = strlen(a);
    printf("%c", IsUpper(a, size-2));
    return 0;
}


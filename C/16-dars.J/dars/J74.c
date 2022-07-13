#include <stdio.h>

void check(int son){
    printf("%s son kiritdingiz",(son>0)?"Musbat":"Manfiy");
}

int main(){
    int son;
    scanf("%d",&son);
    check(son);
}
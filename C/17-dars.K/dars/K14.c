#include <stdio.h> 

void qoshish(char son1, char son2){
    if (son1 < son2)
        qoshish(son1, son2-1);
    printf("%c ", son2);

}
int main(){
    char num1,num2 = 'z';
    scanf("%c",&num1);
    qoshish(num1, num2);

}


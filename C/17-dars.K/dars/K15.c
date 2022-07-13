#include <stdio.h> 

void qoshish(char son1, char son2){
    printf("%c ", son1);
    if (son1 > son2)
        qoshish(son1-1, son2);

}
int main(){
    char num1,num2 = 'A';
    scanf("%c",&num1);
    qoshish(num1, num2);

}


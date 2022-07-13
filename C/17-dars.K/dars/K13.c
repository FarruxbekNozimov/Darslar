#include <stdio.h> 

void qoshish(int son1, int son2){
    if (son2 > son1)
        qoshish(son1, son2-1);
    if (son2 % 2 == 0)
        printf("%d ", son2);
    
}
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    qoshish(num1, num2);
    
    return 0;
}

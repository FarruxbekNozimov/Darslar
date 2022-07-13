#include <stdio.h> 

void qoshish(int son1, int son2){
    if (son1 <= son2)
        qoshish(son1, son2-1);
    printf("%d ", son2);

}
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    qoshish(num1, num2);

}


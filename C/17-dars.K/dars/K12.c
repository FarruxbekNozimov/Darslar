#include <stdio.h> 

void qoshish(int son1, int son2){
    printf("%d ", son1);
    if (son1 >= son2+1)
        qoshish(son1-1, son2);

}
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    qoshish(num1, num2);

}


#include <stdio.h> 

void qoshish(int son1, int son2){
    if (son2 > 1)
        qoshish(son1, son2-1);
    printf("%d * %d = %d\n", son1, son2, son1*son2);
    
}
int main(){
    int num1,num2 = 10;
    scanf("%d",&num1);
    qoshish(num1, num2);

}


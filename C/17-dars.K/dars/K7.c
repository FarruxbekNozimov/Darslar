#include <stdio.h> 


int qoshish(int son1, int son2){
    if (son1 == 0){
        return son2;
    }    
    return qoshish(son1-1, son2+1);
}
int main(){
    int num1,num2;
    scanf("%d %d",&num1, &num2);
    printf("%d",qoshish(num1, num2));

}


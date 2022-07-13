#include <stdio.h> 

int s = 0;
int qoshish(int f0, int f1, int n){
    if (n == 0)
        return f0;
    else if (n == 1)
        return f1;
    else{
        if (n > s){
            int jami = f0 + f1;
            f0 = f1;
            f1 = jami;
            if (n == 1)
                return f0;
            qoshish(f0, f1, n-1);
        }

    }

}
int main(){
    int num1,num2,num3;
    scanf("%d %d %d",&num1, &num2, &num3);
    printf("%d",qoshish(num1, num2, num3));

}

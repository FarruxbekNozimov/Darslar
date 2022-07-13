#include <stdio.h>

int main(){

    //Foydalanuvchi a va b natural sonlarni kiritadi.
    // Siz esa a ning bchi darajasini toping.

    int a,b,sum=1;
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= b; i++){
        sum *= a;
    }
    printf("%d", sum);
}
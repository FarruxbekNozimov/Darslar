#include <stdio.h>

int main(){
    // Foydalanuvchi son kiritadi. Shu son mukammal ekanligini tekshiring.
    
    int a;
    scanf("%d", &a);
    int sum = 0;

    for (int i = 0; i < a; i++){
        for (int j = 1; j <= i; j++){
            sum += j;
        }
    }
    if (sum == a){
        printf("Mukammal\n");
    }else{
        printf("Mukammal emas\n");
    }

    return 0;
}
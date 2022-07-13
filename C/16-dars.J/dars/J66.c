#include <stdio.h>

int tub_next(int son){
    for (int i = son+1; i < son*2; i++){
        int a = 0;
        for (int j = 2; j < son; j++)
            if (i % j == 0) a++;
        if (a == 0)
            return i;
    }
}

int main(){
    int son;
    scanf("%d", &son);
    printf("%d",tub_next(son));
    return 0;
}


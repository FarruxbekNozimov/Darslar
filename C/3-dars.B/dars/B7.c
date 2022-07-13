#include <stdio.h>
#include <math.h>

int main()
{
    int yil;
    printf("Yil kiriting >> ");
    scanf("%d", &yil);

    if (yil % 100 != 0 && yil % 400 == 0){
        if (yil % 4 == 0){
                printf("Kabisa");
        }
    }else{
        printf("Kabisa emas");
    }
    

    return 0;
}
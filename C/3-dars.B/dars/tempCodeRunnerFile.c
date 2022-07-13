#include <stdio.h>
#include <math.h>

int main()
{
    int yil;
    printf("Yil kiriting >> ");
    scanf("%d", &yil);

    if (yil % 4 == 0){
        if (yil % 400 == 0){
            if (yil % 100 != 0){
                printf("Kabisa\n");
            }
        }
    }else{
        printf("Kabisa emas\n");
    }
    

    return 0;
}
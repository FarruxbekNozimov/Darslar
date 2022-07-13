#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int oy,yil;
    yil = 12;
    printf("Oyning sonini kiriting : ");
    scanf("%d", &oy);
    printf("Hozir %d oy qoldi\n", oy%yil);



    return 0;
}
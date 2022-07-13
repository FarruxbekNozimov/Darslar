#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int g1,g2;
    g1 = 360;
    printf("Necha gradus burildingiz : ");
    scanf("%d", &g2);
    printf("Siz dastlabki holatdan %d gradus burilgansiz\n", g2%g1);



    return 0;
}
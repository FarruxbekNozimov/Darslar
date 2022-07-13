#include <stdio.h>

int main()
{
    int a,b,c;

    printf("1-Son : ");
    scanf("%d", &a);
    printf("2-Son : ");
    scanf("%d", &b);
    printf("3-Son : ");
    scanf("%d", &c);
    printf("Parallelepiped yuzi: %d",2*(a*b+b*c+c*a));

    return 0;
}
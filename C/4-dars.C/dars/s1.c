#include <stdio.h>

int main(){

    int oy;

    printf("Oyni kiriting: ");
    scanf("%d", &oy);

    switch (oy){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 kun\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 kun\n");
        break;
    case 2:
        printf("28 yoki 29 kun\n");
        break;
        
    default:
    
        break;
    }


}
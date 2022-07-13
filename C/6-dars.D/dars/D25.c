#include <stdio.h>

int main(){
    int n, num = 0;

    printf("Raqam kiriting : ");
    scanf("%d", &n);

    while(n != 0){
        num = num * 10 + n % 10;
        n /= 10;                            
    }

    while(num != 0){
        switch(num % 10){
            case 0: 
                printf("Nol ");
                break;
            case 1: 
                printf("Bir ");
                break;
            case 2: 
                printf("Ikki ");
                break;
            case 3: 
                printf("Uch ");
                break;
            case 4: 
                printf("To'rt ");
                break;
            case 5: 
                printf("Besh ");
                break;
            case 6: 
                printf("Olti ");
                break;
            case 7: 
                printf("Yetti ");
                break;
            case 8: 
                printf("Sakkiz ");
                break;
            case 9: 
                printf("To'qqiz ");
                break;
        }       
        num = num / 10;
    }

    return 0;
}
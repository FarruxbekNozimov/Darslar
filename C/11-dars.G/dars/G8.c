#include <stdio.h>  
#include <stdlib.h>  
  
int main() {  
    system("cls");
    int son,son1;  
    scanf("%d",&son);  

    for(int i=1;i<=son*2;i++){  
        for(int j=1;j<=son;j++){  
            if(i<=son && i<=j || i>son && i+j>son*2)  
                printf("* ");  
            else  
                printf(" ");  
        }  
        printf("\n");  
    }  
    return 0;  
}  

#include <stdio.h>  
  
int main(){  
    int son,copy;  
    scanf("%d",&son);  
    
    copy=son;
    for(int i=1;i<=son;i++){  
            for(int j=1;j<i;j++){  
                printf(" ");  
            }  
            for(int k=1;k<=copy;k++){  
                printf("*");  
            }  
            copy--;  
            
            printf("\n");  
    }  
    return 0;  
}  
#include <stdio.h>  

int main(){  
    int son,m;  
    printf("Son kiriting >>> ");  
    scanf("%d",&son);  
    m=son;  
    for(int i=1;i<=son;i++)  {  
        for(int j=1;j<=m-1;j++) {  
            printf("  ");  
        }  
        for(int k=1;k<=2*i-1;k++) {  
            printf("* ");  
        }  
        m--;  
        
        printf("\n");  
    }  
    return 0;  
}  
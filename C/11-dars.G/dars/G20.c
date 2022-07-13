#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int son;
    scanf("%d",&son);

    for (int i=0;i<=son;i++){       
        for (int k = 0; k <= son-i; k++){
            printf("  "); 
        }
        for (int j = i; j >= 0; j--){
            printf("%d ",j);
        }
        for(int j=1;j<=i;j++){
            printf("%d ",j); 
        }
 
        printf("\n");
    }
    
    
    return 0;
}
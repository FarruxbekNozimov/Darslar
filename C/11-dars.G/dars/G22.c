#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls"); 
    int son,k;
    scanf("%d",&son);

    for (int i = 1; i <= son; i++){
        k='A';
        for (int j = 1; j <= son*2-1; j++){
            if(j<=son+1-i || j>=son-1+i){
                printf("%c ",k);
                // if (j<son)
                //     k++;
                // else 
                //     k--;
                j<son?k++:k--;
            }else{
                printf("  ");
                if (j==son)
                    k--;
            }
        }
        printf("\n");
    }
    

    return 0;
}
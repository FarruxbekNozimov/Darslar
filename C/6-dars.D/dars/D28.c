#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=2,n=100,flag=0,j,target,count=0;
   
    printf(">>> ");
    scanf("%d",&target);
    while(i<=n){
        flag=0;
        for(j=2;j<=i-1;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            count++;
        }
        if(count==target){
                printf(">>> %d",i);
            break;
        }
        i++;
    }
    return 0;
}
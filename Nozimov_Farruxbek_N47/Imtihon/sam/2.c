//Bismillahir Rahmanir Rahim

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int n,sanoq,son=0;
    scanf("%d",&n);
    int massiv[n];
    int tubligi[n];
    for(int i=0; i<n; i++){
        massiv[i]=rand()%11;
        printf("%d ",massiv[i]);
    }
    puts("");
    for(int i=0; i<n; i++){
        sanoq=0;
        for(int j=2; j*j<=massiv[i]; j++){
            if(massiv[i]%j==0 || massiv[i]<2){
                sanoq++;
                break;
            }
        }
        if(sanoq==0 && massiv[i]>1)
            tubligi[son++]=massiv[i];
    }
    for(int i=0; i<son; i++)
        printf("%d ",tubligi[i]);
    return 0;
}
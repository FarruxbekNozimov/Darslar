#include <stdio.h>
int main(){
    int son=1,s,n,sanoq=0,tub_son,boluvchi;
    scanf("%d",&n);
    while(sanoq < n){
        boluvchi=0;
        son++;
        s=2;
        while(s < son){
            if(son%s==0)
                boluvchi++;
            s++;
        }
        if(boluvchi==0){
            tub_son=son;
            sanoq++;
        }
    }
    printf("%d ",tub_son);
}
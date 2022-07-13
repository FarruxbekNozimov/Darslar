#include <stdio.h>
#include <stdlib.h>
#define len 5

void toq_r(int nums[]){
    int jami = 0,sons[len],min = sons[0];
    for (int i = 0; i < len; i++)  jami += nums[i];
    jami /= len;
    for (int i = 0; i < len; i++){
        sons[i] = abs(jami-nums[i]);
        if (min >= sons[i]){ 
            min = sons[i];
            printf("%d",nums[i]);
        }
    }
}

int main(){
    int son[len];
    for (int i = 0; i < len; i++) scanf("%d",&son[i]);
    toq_r(son);
    return 0;
}
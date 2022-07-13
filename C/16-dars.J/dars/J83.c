#include <stdio.h>

void toq_r(int nums[],int len){
    i = len/2;
    int sons[i]={};
    int s=0;
    for (int i = 0; i < len; i++)
        if (i % 2){
            sons[s] = nums[i];
            s++;
        }
    s = len/2-1;
    for (int i = 0; i < len; i++)
        if (i % 2){
            nums[i]=sons[s];
            s--;
        }
    for (int i = 0; i < len; i++)  printf("%d ",nums[i]);        
}

int main(){
    int son[100],uzunlik;
    scanf("%d",&uzunlik);
    for (int i = 0; i < uzunlik; i++) scanf("%d",&son[i]);
    toq_r(son,uzunlik);
}
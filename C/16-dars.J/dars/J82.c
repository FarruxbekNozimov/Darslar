#include <stdio.h>
#define len 10

void yarmi_tesk(int nums[]){
    for (int i = 0; i < len/2; i++)  printf("%d ",nums[i]);
    for (int i = len-1; i >= len/2; i--)  printf("%d ",nums[i]);
}

int main(){
    int son[len];
    for (int i = 0; i < len; i++) scanf("%d",&son[i]);
    yarmi_tesk(son);
}
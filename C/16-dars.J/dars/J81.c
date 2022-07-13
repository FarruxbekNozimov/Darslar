#include <stdio.h>
#define size 10

void bormi(int nums[]){
    for (int i = size-1; i >= 0; i--)  printf("%d ",nums[i]);
}
int main(){
    int son[size];
    for (int i = 0; i < size; i++) scanf("%d",&son[i]);
    bormi(son);
}
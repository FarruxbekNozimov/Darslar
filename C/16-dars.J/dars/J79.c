#include <stdio.h>
#define len 10

int teng(int nums[]){
    int jami = 0;
    for (int i = 0; i < len; i++) jami += nums[i];
    return (jami/len == nums[0]);
}
int main(){
    int son[len];
    for (int i = 0; i < len; i++) scanf("%d",&son[i]);
    printf("%d",teng(son));
}
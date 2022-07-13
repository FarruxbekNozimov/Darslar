#include <stdio.h>
#define len 10

int bormi(int nums[]){
    int a;
    for (int i = 0; i < len; i++){
        a = 0;
        for (int j = 0; j < i; j++) 
            if (nums[i] == nums[j])
                return 0;
    }    
    return 1;
    
}
int main(){
    int son[len];
    for (int i = 0; i < len; i++) scanf("%d",&son[i]);
    printf("%d",bormi(son));
}
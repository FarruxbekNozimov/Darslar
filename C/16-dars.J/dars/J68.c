#include <stdio.h>

int max(int nums[],int len){
    int max = nums[0];
    for (int i = 0; i < len; i++)
        if (max < nums[i]) max = nums[i];
    return max;
}

int main(){
    int nums[10];
    int size = sizeof nums/sizeof nums[0];
    for (int i = 0; i < size; i++) scanf("%d",&nums[i]);
    printf("%d",max(nums,size));
    return 0;
}
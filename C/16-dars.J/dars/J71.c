#include <stdio.h>
#define size 5

int reverse_t(float arr1[],float arr2[]){
    float son[size];
    int a=size,quti=0;
    for (int i = 0; i < size; i++){
        a--;
        son[a]=arr2[i];
    }
    for (int i = 0; i < size; i++)
        if (arr1[i]==arr2[i])
            quti++;
    return (quti==size);
}
int main(){
    float arr1[size],arr2[size];
    for (int i = 0; i < size; i++) scanf("%f",&arr1[i]);
    for (int i = 0; i < size; i++) scanf("%f",&arr2[i]);
    printf("%d",reverse_t(arr1,arr2));
    return 0;
}
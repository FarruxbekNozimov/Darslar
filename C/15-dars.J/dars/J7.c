#include <stdio.h>

int soni(int a){
    int c=0;
    for (int i = a; i != 0; i/=10) c++;
    return c;
}
int main(){
    int a;
    scanf("%d",&a);
    printf("%d",soni(a));
    return 0;
}
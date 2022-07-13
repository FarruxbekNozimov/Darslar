//Bismillahir Rahmanir Rahim

// N ta sondan iborat array berilgan shu arrayning musbat solari yig'indisini
// hisoblovchi SUMMA nomli funksiya tuzilsin
#include <stdio.h>
int SUMMA(int n,int massiv[]){
    int sum = 0;
    for(int i = 0; i < n; i++)
        if(massiv[i] > 0)
            sum += massiv[i];
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int massiv[n];
    for(int i = 0; i < n; i++)
        scanf("%d",&massiv[i]);
    printf("%d",SUMMA(n,massiv));
    return 0;
}
//Bismillahir Rahmanir Rahim

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int n;
    scanf("%d",&n);
    int massiv[n][n];
    printf("Matritsa elementlari: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            massiv[i][j]=rand()%10;
            printf("%d ",massiv[i][j]);
        }
        printf("\n");
    }
    puts("");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i%2 || j%2)
                printf("* ");
            else
                printf("%d ",massiv[i][j]);
        }
        printf("\n");
    }
}
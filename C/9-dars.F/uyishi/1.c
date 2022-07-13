#include <stdio.h>

int main(){

    int i,j,num;

    printf("Enter the number : ");

    scanf("%d",&num);

    for(i=0;i<num;i++){
        for(j=0;j<=num;j++) {
            printf("%c",219);//219 is the ASCII cose for white
            printf(" ");

        }
        printf("\n");
        if(i%2==0){
            printf("%c",255);//255 is the ASCII cose for white
        }
    }

    return 0;

}
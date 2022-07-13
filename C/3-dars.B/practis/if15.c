#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int son[3],num1,num2,num3;
    for (int i = 0; i < 3; i++){
        printf("%d-sonni kiriting : ", i+1);
        scanf("%d", &son[i]);
    }
    num1 = son[0]+son[1];
    num2 = son[0]+son[2];
    num3 = son[1]+son[2];
    if (num1 > num2 && num1 > num3){
        printf("Eng kattasi >> %d + %d = %d\n",son[0],son[1], num1);
    }else if (num2 > num1 && num2 > num3){
        printf("Eng kattasi >> %d + %d = %d\n",son[0],son[2], num2);
    }else if (num3 > num1 && num3 > num2){
        printf("Eng kattasi >> %d + %d = %d\n",son[1],son[2], num3);
    }else{
        printf("Barchasi teng");
    }
    return 0;
}
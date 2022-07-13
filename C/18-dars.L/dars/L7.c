#include <stdio.h>

void know (int num[],int len){
    for (int i = 0; i < len; i++){
        if (i % 2){
            num[i] -= 5;
        }else{
            num[i] *= 5;
        }
    }
    
}


int main(){
    int son[]={1,2,3,4,5,6,7};
    int uzunlik = sizeof(son)/sizeof(son[0]);

    know(son,uzunlik); 
    return 0;
}
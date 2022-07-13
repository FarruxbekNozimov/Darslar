#include <stdio.h>

void know (int num[],int len){
    for (int i = 0; i < len; i++){
        for (int j = 0; j < len; j++){
            if (num[i] < num[j]){
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
        
    }
    
}


int main(){
    int son[]={7,6,4,5,3,1,2};
    int uzunlik = sizeof(son)/sizeof(son[0]);

    know(son,uzunlik); 
    return 0;
}
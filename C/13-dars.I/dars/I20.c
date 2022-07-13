#include <stdio.h>

int main(){
            
    int i, j;
    int my_array[11]= {3, 5, -4, 0, 15, 88, -2, -9, 7, -1};
    int size = sizeof(my_array)/sizeof(my_array[0]),son;
    scanf("%d",&son);

    for (i = size-1; i > 0; i--){                                
        my_array[i]=son;
        break;
    }
    for (i = 0; i < size; i++){                                 
        printf("%d ", my_array[i]);
    }
    
    
    return 0;
} 
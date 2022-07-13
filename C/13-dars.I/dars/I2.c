#include <stdio.h>

int main(){
    
    int i, j, a, n, sonlar[7];

    int size = sizeof sonlar / sizeof sonlar[0];

    printf(">>> ");    
    for (i = 0; i < size; i++)
        scanf("%d", &sonlar[i]);                                 
    
    for (i = 0; i < size; i++){                                 
        for (j = i + 1; j < size; j++){                         
            if (sonlar[i] > sonlar[j]) {                        
                a =  sonlar[i];                                 
                sonlar[i] = sonlar[j];                          
                sonlar[j] = a;                                  

            }
        }
    }

    printf("Teskarisi >>>\n");
    for (i = 0; i < size; i++)
        printf("%d\n", sonlar[i]);

}
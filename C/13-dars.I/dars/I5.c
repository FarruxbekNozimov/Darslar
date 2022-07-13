#include <stdio.h>

int main(){
    
    int i, j, a, n, sonlar[]={2, 15, 19, 34, 26, 88, 27, 55, 20, 11};

    int size = sizeof sonlar / sizeof sonlar[0];

    for (i = 0; i < size; i++){                                 
        for (j = i + 1; j < size; j++){                         
            if (sonlar[i] % 2) {                        
                a =  sonlar[i];                                    
                sonlar[i] = sonlar[j];                          
                sonlar[j] = a;                                  

            }
        }
    }

    printf("Teskarisi >>>\n");
    for (i = 0; i < size; i++)
        printf("%d ", sonlar[i]);

}
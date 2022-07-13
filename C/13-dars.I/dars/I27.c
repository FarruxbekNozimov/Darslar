#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    int sonlar[10],sanoq=0;
    
    int size = sizeof(sonlar)/sizeof(sonlar[0]);

    for(int i = 0; i < 10; i++) {
        scanf("%d",&sonlar[i]);
    }

    printf(">>> ");
    for(int i = 0; i < 10; i++) {
        sanoq=0;
        for(int j = 0; j < i; j++) {
            if(sonlar[i]==sonlar[j])
                sanoq++;
        }
        if(sanoq == 0)
            printf("%d ",sonlar[i]);
    }   

    return 0;
}
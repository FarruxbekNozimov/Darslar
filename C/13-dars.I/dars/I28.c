#include <stdio.h>
#include <stdlib.h>

int main() {
    // system("cls");
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
        if(sanoq == 1){
            printf("%d ",sonlar[i]);
        }
    }   

    return 0;
}

// #include <stdio.h>

// int main() {

//     int sonlar[] = {3, 5, 4, 0, 1, 5, 2, 3,3, 7};
//     int size = sizeof(sonlar)/sizeof(sonlar[0]),sonlar1[10] = {},t = 0,i,j;

//     for(i = 0; i < size-1; i++){
        
//         for(j = i+1; j < size; j++){
//             if(sonlar[i] == sonlar[j]){
//                 sonlar1[t] = sonlar[i];
//                 t++;
//             }
//         }
//     }

//     for (int i = 0; i < 10; i++){
//         printf("%d ", sonlar1[i]);
//     }
        
//     return 0;
// }


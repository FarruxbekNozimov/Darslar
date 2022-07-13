    // #include <stdio.h>
    // #include <stdbool.h>
    // #include <math.h>
    // int main() {

    //     //Foydalanuvchi butun son kiritadi. 
    //     // Shu son natural bo'lsa -> "Natural son"
    //     // Aks holda -> "Natural emas"
    //     int son;

    //     printf("Son kiriting >> ");
    //     scanf("%f", &son);
    //     int a = son;
    //     switch (son>0){
    //         case true:
    //             printf("Natural son");
    //             break;
    //         default:
    //             printf("Natural son emas");

    //     }

        
    //     return 0;
    // }
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    int main()
    {
        system("cls");
        int son,num2;
        scanf("%f", &son);
        float num=son;
        son=ceil(son);
    

        switch (son/num==1){
        case 1:
        
        printf("Natural son");
            break;
        default:
            printf("Natural son emas");
        }

        return 0;
    }
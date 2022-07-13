#include <stdio.h>

int  main(){

    //Foydalanavchi belgi kiritiladi. Agar shu belgi unli harf bo'lsa, 
    //ekranga "unli harf" degan yozuvni chiqaring, 
    //agar undosh harf kiritgan bo'lsa "undosh harf" degan yozuv chiqaring, 
    //aksa holda "bunday harf yo'q" degan yozuvni chiqaring.

    char u;

    printf("Unli harf kiriting: ");
    scanf("%c",&u);

    if(u=='a' || u=='e' || u=='i' || u=='o' || u=='u'){
        printf("Unli harf");
    }else{
        printf("Bunday harf yo'q");
    }
    



}
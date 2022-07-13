#include <stdio.h> 


void show_qator(int karra, int kopaytma, int gacha){
    if (karra < gacha){
        show_qator(karra, kopaytma, gacha-1);
    }
    printf("%d * %d = %d\t", gacha, kopaytma, gacha * kopaytma);
}
void beshta_block(int karra, int kopaytma, int gacha){
    show_qator(karra, kopaytma, gacha);
    printf("\n");
    if (kopaytma < 10)
        beshta_block(karra, kopaytma+1, gacha);
}
int main(){
    beshta_block(1, 1, 5);
    printf("\n");
    beshta_block(6, 1, 10);
    return 0;
}


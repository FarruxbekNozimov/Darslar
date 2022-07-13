#include <stdio.h>

int main(){

    // Uzunlik birliklari berilgan. 1-detsimetr, 2-kilometr, 3-metr, 4-milimetr, 5-cantimetr,
    //uzunlik birligini bildiruvchi son (1-5) va shu birlikdagi kesma uzunligi berilgan(haqiqiy son)
    //kesmaning uzunligini metrlarda ifodalovchi dastur tuzing.

    int a;
    float b,c;
    printf("Uzunlik birligi(1-5): ");
    scanf("%d", &a);
    printf("Kesim uzunligi: ");
    scanf("%f", &b);

    switch (a){
        case 1:
            c = b/10000;
            break;
        case 2:
            c = b;
            break;
        case 3:
            c = b/1000;
            break;
        case 4:
            c = b/1000000;
            break;
        case 5:
            c = b/100000;
            break;
        default:
            printf("Noto'g'ri ketdi!\n");
            break;
    }
    printf("%f\n", c);



}
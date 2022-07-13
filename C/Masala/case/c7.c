#include <stdio.h>

int main(){

    //Og'irlik birliklari berilgan. 1-kilogramm,2-milligramm,3-gramm,4-ton,5-sentner.
    //Og'irlik birligini bildiruvchi son (1-5) va shu birlikdagi kesma uzunligi berilgan(haqiqiy son)
    //og'irlikni kilogrammda ifodalovchi dastur tuzing.

    int a;
    float b,c;
    printf("Og'irlik birligi(1-5) >> ");
    scanf("%d", &a);
    printf("Og'irlik >> ");
    scanf("%f", &b);

    switch (a){
        case 1:
            c = b;
            break;
        case 2:
            c = b/100000;
            break;
        case 3:
            c = b/1000;
            break;
        case 4:
            c = b/0.001;
            break;
        case 5:
            c = b/0.01;
            break;
        default:
            printf("Noto'g'ri ketdi!\n");
            break;
    }
    printf(">> %f\n", c);
}
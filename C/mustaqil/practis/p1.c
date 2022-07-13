#include <stdio.h>

int main(){

    int son,bi,on;
    printf("Son kirting (10-99): ");
    scanf("%d",&son);
    on=son/10;
    bi=son%10;

    if (son >= 10 && son < 100){
        if(on==1){
            printf("O'n");
        }else if(on==2){
            printf("Yigirma");
        }else if(on==3){
            printf("O'ttiz");
        }else if(on==4){
            printf("Qirq");
        }else if(on==5){
            printf("Ellik");
        }else if(on==6){
            printf("Oltmish");
        }else if(on==7){
            printf("Yetmish");
        }else if(on==8){
            printf("Sakson");
        }else if(on==9){
            printf("To'qson");
        }
        if(bi==1){
            printf(" bi");
        }else if(bi==2){
            printf(" ikki");
        }else if(bi==3){
            printf(" uch");
        }else if(bi==4){
            printf(" toq");
        }else if(bi==5){
            printf(" bek");
        }else if(bi==6){
            printf(" olti");
        }else if(bi==7){
            printf(" yeddi");
        }else if(bi==8){
            printf(" sesh");
        }else if(bi==9){
            printf(" otdi");
    }else{
        printf("chegaradan oshdingiz!");
    }
}
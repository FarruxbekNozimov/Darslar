#include <stdio.h>
int main(){
    
    // [0-9] oraliqda bo'lsa, "bir xonali son",
    // [10-99] oraliqda bo'lsa, "ikki xonali son",
    // [100-999] oraliqda bo'lsa, "uch xonali son",
    // [1000-9999] oraliqda bo'lsa, "to'rt xonali son",
    // [10000-99999] oraliqda bo'lsa, "besh xonali son",

    int son;
    int x;
    printf("Son kiriting >> ");
    scanf("%d", &son);
    #define son1  = son

    if (ceil(son)==son){ 
        switch (son){
            case 0 ... 9:
                printf("Bir xonali son");
                break;
            case 10 ... 99:
                printf("Ikki xonali son");
                break;
            case 100 ... 999:
                printf("Uch xonali son");
                break;
            case 1000 ... 9999:
                printf("To'rt xonali son");
                break;
            case 10000 ... 99999:
                printf("Besh xonali son");
                break;
            default:
        }




    return 0;
}

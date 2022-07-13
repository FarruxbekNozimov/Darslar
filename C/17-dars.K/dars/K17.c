#include <stdio.h> 

int s = 0;
void show_qator(int son){
    s++;
    if (son > s*s){
        printf("%d ",s*s);
        show_qator(son);
    } 
}

int main(){
    int son;
    scanf("%d", &son);
    show_qator(son);

    return 0;
}


#include <stdio.h>

int a = 0;

void show_sonning_boluvchilari(int son){
    if (son >= a){
        a++;
        if (son % a == 0)
            printf("%d ", a);
        show_sonning_boluvchilari(son);
    }
}

int main() {
    show_sonning_boluvchilari(48);
    return 0;
}


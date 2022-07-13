#include <stdio.h>

int main(){
    FILE * fp = fopen("futbolchilar.txt", "w");

    fclose(fp);
}
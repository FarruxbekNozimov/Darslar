#include <stdio.h>

#define SIZE 100

int main(){
    FILE * fp = fopen("inter.txt", "r");

    char qator[SIZE];

    if (fp){
        FILE * fp1 = fopen("talabalar.txt", "w");
        while (fgets(qator, SIZE, fp)){
            fprintf(fp1, "%s", qator);
        }
        fclose(fp1);
    }else{
        printf("File is not open\n");
    }

    fclose(fp);
}
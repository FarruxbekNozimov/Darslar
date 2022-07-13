#include <stdio.h>

int main(){
    char name[20], surname[20], nation[20];
    int age, height, weight; 
    FILE * fp;
    fp = fopen("M5.txt", "w");

    printf("Name >>> ");
    scanf("%s", name);
    printf("Surname >>> ");
    scanf("%s", surname);
    printf("Age >>> ");
    scanf("%d", &age);
    printf("Height >>> ");
    scanf(" %d", &height);
    printf("Nationality >>> ");
    scanf(" %s", nation);
    printf("Weight >>> ");
    scanf(" %d", &weight);


    fprintf(fp, "Mening ismim [%s]man\n", name);
    fprintf(fp, "Mening familyam [%s]\n", surname);
    fprintf(fp, "Mening yoshim [%d]\n", age);
    fprintf(fp, "Mening boyim [%d]\n", height);
    fprintf(fp, "Mening davlatim [%s]\n", nation);
    fprintf(fp, "Mening vaznim [%d] kg\n", weight);

    fclose(fp);
}
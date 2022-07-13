#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Human {
    char name[20];
    char surname[20];
    int age;
    char gender[20];
    char job[20];
    char region[20];
    int is_married;
    char nation[20];
    char pasport[20];
    int phone;
} human;

human createhuman(){
    human xHuman;
    
    printf("Name: ");
    scanf("%s",xHuman.name);
    printf("Surname: ");
    scanf("%s",xHuman.surname);
    printf("Age: ");
    scanf("%d",&xHuman.age);
    printf("Gender: ");
    scanf("%s",xHuman.gender);
    printf("Job: ");
    scanf("%s",xHuman.job);
    printf("Region: ");
    scanf("%s",xHuman.region);
    printf("IsMerried(1/0)");
    scanf("%d",&xHuman.is_married);
    printf("Nationality: ");
    scanf("%s",xHuman.nation);
    printf("Passport: ");
    scanf("%d",&xHuman.pasport);
    printf("Phone: +998");
    scanf("%d",&xHuman.phone);
    printf("\n\n");

    return xHuman;
}

void show_humans(human *Human, int count){

    for(int j = 0; j < count; j++){
        printf("%d - Odam\n", j + 1);
        printf("Name: %s\n", Human[j].name);
        printf("Surname: %s\n", Human[j].surname);
        printf("Age: %d\n", Human[j].age);
        printf("Gender: %s\n", Human[j].gender);
        printf("Job: %s\n",Human[j].job);
        printf("Region: %s\n",Human[j].region);
        printf("IsMarried: %d\n",Human[j].is_married);
        printf("Nation: %s",Human[j].nation);
        printf("Passport: %s",Human[j].pasport);
        printf("Phone: +998%d",Human[j].phone);

    }
}

int main(){
    char n;
    int count;
    human *Human;
    printf(">>>");
    scanf("%d", &count);

    Human = malloc(count * sizeof(human));
    // int *p;
    n = getchar();
    for(int i = 0; i < count; i++){
        Human[i] = createhuman();
    }
    show_humans(Human, count);

    return 0;
}
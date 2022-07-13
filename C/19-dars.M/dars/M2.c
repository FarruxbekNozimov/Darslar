#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct car {
    char brand[20];
    int speed;
    int cost;
    int year;
    char color;
    bool new;
    bool automative;
    char country[20];
} car1, car2, car3, car4, car5;
void show_info();
void get_info();

int main(){

    printf("\n");
    get_info(&car1);
    printf("\n");
    get_info(&car2);
    printf("\n");
    get_info(&car3);
    printf("\n");
    get_info(&car4);
    printf("\n");
    get_info(&car5);
    printf("\n\n");
    show_info(&car1);
    printf("\n");
    show_info(&car2);
    printf("\n");
    show_info(&car3);
    printf("\n");
    show_info(&car4);
    printf("\n");
    show_info(&car5);
}
void show_info(struct car something){
    printf("Brand: %s\n", something.brand);
    printf("Speed: %d\n", something.speed);
    printf("Cost: %d\n", something.cost);
    printf("Year: %d\n", something.year);
    printf("Color: %c\n", something.color);
    printf("New: %d\n", something.new);
    printf("Automative: %d\n", something.automative);
    printf("Country: %s\n", something.country);
}

void get_info(struct car *anything){
    printf("Brand:");
    scanf("%s", anything->brand);

    printf("Speed:");
    scanf("%d", &anythingx->speed);

    printf("Cost:");
    scanf("%d", &anything->cost);

    printf("Year:");
    scanf("%d", &anything->year);

    printf("Color:");
    scanf("%s", anything->color);

    printf("New(0/1):");
    scanf("%d", &anything->new);

    printf("Automative(0/1):");
    scanf("%d", &anything->automative);

    printf("Country:");
    scanf("%s", anything->country);
}
#include <stdio.h>
#include <stdlib.h>

typedef struct Country {
    char name[20];
    char language[20];
    char religion[20];
    int population;
    int num_of_cities;
    float area;
    char capital[20];
    char money[20];
    char president[20];
    char continent[20];

}country;

country createCountry();
void show_countries();

int main(){
    int count;
    country *Country;
    printf("Davlatlar soni >>> ");
    scanf("%d", &count);
    Country = malloc(count * sizeof(country));
    for (int i = 0; i < count; i++){
        printf("\n%d - Davlat\n", i + 1);
        Country[i] = createCountry();
    }
    show_countries(Country, count);
}

country createCountry(){
    country xCountry;

    printf("Name: ");
    scanf("%s", xCountry.name);
    printf("Language: ");
    scanf("%s", xCountry.language);
    printf("Religion: ");
    scanf("%s", xCountry.religion);
    printf("Population: ");
    scanf("%d", &xCountry.population);
    printf("Number of cities: ");
    scanf("%d", &xCountry.num_of_cities);
    printf("Area: ");
    scanf("%f", &xCountry.area);
    printf("Capital: ");
    scanf("%s", xCountry.capital);
    printf("Money: ");
    scanf("%s", xCountry.money);
    printf("President: ");
    scanf("%s", xCountry.president);
    printf("Continent: ");
    scanf("%s", xCountry.continent);

    return xCountry;
}

void show_countries(country *Country, int count){
    for (int i = 0; i < count; i++){
        // if (Country[i].population > 20000000){
            printf("%d - Country\n", i + 1);
            printf("Name: %s\n", Country[i].name);
            printf("Language: %s\n", Country[i].language);
            printf("Religion: %s\n", Country[i].religion);
            printf("Population: %d\n", Country[i].population);
            printf("Number of cities: %d\n", Country[i].num_of_cities);
            printf("Area: %f\n", Country[i].area);
            
        // }
    }
}
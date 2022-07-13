#include <stdio.h>
#include <string.h>

struct person {
    char name[20];
    char login[20];
    char password[20];
    int age;
    char country[20];
    char gender[10];
    float height;
    float weight;
    int birth_year;
    char email[20];
    int year_of_experience;
    int children;
};

int main(){

    struct person user1;
    struct person user2;
    struct person user3;

    strcpy(user1.name, "Farruxbek");
    strcpy(user2.name, "Faxriddin");
    strcpy(user3.name, "Firdavs");

    strcpy(user1.login, "07_10Farruxbek");
    strcpy(user2.login, "07_10Faxriddin");
    strcpy(user3.login, "07_10Firdavs");

    strcpy(user1.password, "qwe12ek");
    strcpy(user2.password, "qwe12in");
    strcpy(user3.password, "qwe12");

    user1.age = 15;
    user2.age = 12;
    user3.age = 7;

    strcpy(user1.country, "Uzbekistan");
    strcpy(user2.country, "Uzbekistan");
    strcpy(user3.country, "Uzbekistan");

    strcpy(user1.gender, "Erkak");
    strcpy(user2.gender, "Erkak");
    strcpy(user3.gender, "Erkak");

    user1.height = 150;
    user2.height = 130;
    user3.height = 125;

    user1.weight = 50;
    user2.weight = 45;
    user3.weight = 40;

    user1.birth_year = 2007;
    user2.birth_year = 2009;
    user3.birth_year = 2014;

    strcpy(user1.email, "gmail.com@Farruxbek");
    strcpy(user2.email, "gmail.com@Faxriddin");
    strcpy(user3.email, "gmail.com@Firdavs");

    user1.year_of_experience = 5;
    user2.year_of_experience = 3;
    user3.year_of_experience = 1;

    user1.children = 5;
    user2.children = 3;
    user3.children = 1;

    printf("Name :%s\nLogin :%s\nPassword :%s\nAge :%d\nCountry :%s\n", user1.name, user1.login, user1.password, user1.age, user1.country);
    printf("Gender:%s\nHeight:%.1f\nWeight:%.1f\nBirth Year:%d\nEmail:%s\nExperience:%d\nChildren:%d\n\n\n",user1.gender,user1.height,user1.weight,user1.birth_year,user1.email,user1.year_of_experience,user1.children);

    printf("Name :%s\nLogin :%s\nPassword :%s\nAge :%d\nCountry :%s\n", user2.name, user2.login, user2.password, user2.age, user2.country);
    printf("Gender:%s\nHeight:%.1f\nWeight:%.1f\nBirth Year:%d\nEmail:%s\nExperience:%d\nChildren:%d\n\n\n",user2.gender,user2.height,user2.weight,user2.birth_year,user2.email,user2.year_of_experience,user2.children);

    printf("Name :%s\nLogin :%s\nPassword :%s\nAge :%d\nCountry :%s\n", user3.name, user1.login, user1.password, user1.age, user1.country);
    printf("Gender:%s\nHeight:%.1f\nWeight:%.1f\nBirth Year:%d\nEmail:%s\nExperience:%d\nChildren:%d\n\n\n",user3.gender,user1.height,user1.weight,user1.birth_year,user1.email,user1.year_of_experience,user1.children);

}


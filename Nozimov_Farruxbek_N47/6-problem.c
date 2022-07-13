//Bismillahir Rohmanir Rohim

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct student{
    char ism[30];
    int kun;
    int oy;
    int yil;
    int sinf;
    int baho;
} Student;

void Print_Students();
Student Get_Students();

int main(){
    int soni = 2;
    Student *student;
    student=malloc(soni*sizeof(Student));
    
    for(int i=0; i<soni; i++)
        student[i]=Get_Students();
    
    Print_Students(student, soni);

    return 0;
}


void Print_Students(Student *xStudent, int soni){
    char soz = 'A';
    for (int i = 0; i < soni; i++){
        if(xStudent[i].sinf > 4 && xStudent[i].ism[0] == soz){
            printf("\n%d - O'quvchi",i+1);
            printf("\nStudent Ismi: %s",xStudent[i].ism);
            printf("Tug'ilgan Sanasi: %d/%d/%d\n",xStudent[i].kun,xStudent[i].oy,xStudent[i].yil);
            printf("O'quvchi Sinfi: %d\n",xStudent[i].sinf);
            printf("O'quvchi Bahosi: %d\n\n",xStudent[i].baho);
        }
    }
    
}

Student Get_Students(){
    Student xStudent;

    printf("\nIsmi: ");
    fgets(xStudent.ism,30,stdin);
    printf("Tug'ilgan kuni: ");
    scanf("%d",&xStudent.kun);
    printf("Tug'ilgan oyi: ");
    scanf("%d",&xStudent.oy);
    printf("Tug'ilgan yili: ");
    scanf("%d",&xStudent.yil);
    // char n=getchar();
    printf("O'quvchi Sinfi: ");
    scanf("%d",&xStudent.sinf);
    printf("O'quvchi Bahosi: ");
    scanf("%d",&xStudent.baho);
    char n=getchar();

    return xStudent;
}

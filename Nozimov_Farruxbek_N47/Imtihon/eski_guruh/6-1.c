//Talaba ismi | Talaba tug'ilgan sana (kun,oy,yil) | Talaba ustozi | Talaba ustozi | Talaba bahosi
// Talaba bahosi 4 va tug'ilgan yili 2003 dan yuqorilar chiqarilsin
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct sana{
    int kun;
    int oy;
    int yil;
};
typedef struct talaba{
    char ism[30];
    struct sana tugilgan;
    char ustoz[30];
    int baho;
}Talaba;

Talaba kirit(){
    Talaba xStudent;
    printf("\nIsmi: ");
    fgets(xStudent.ism,30,stdin);
    printf("Tug'ilgan kuni: ");
    scanf("%d",&xStudent.tugilgan.kun);
    printf("Tug'ilgan oyi: ");
    scanf("%d",&xStudent.tugilgan.oy);
    printf("Tug'ilgan yili: ");
    scanf("%d",&xStudent.tugilgan.yil);
    char n=getchar();
    printf("Talaba ustozi: ");
    fgets(xStudent.ustoz,30,stdin);
    printf("Talaba bahosi: ");
    scanf("%d",&xStudent.baho);
    n=getchar();
}

void chiqar(Talaba xStudent){
    if(xStudent.baho==4 && xStudent.tugilgan.yil>2003){
        printf("\nTalaba ismi: %s",xStudent.ism);
        printf("Tug'ilgan sanasi: %d/%d/%d\n",xStudent.tugilgan.kun,xStudent.tugilgan.oy,xStudent.tugilgan.yil);
        printf("Talaba ustozi: %s",xStudent.ustoz);
        printf("Talaba bahosi: %d\n",xStudent.baho);
    }
}
int main(){
    system("cls");
    int soni;
    printf("\nNechta kiritasiz: ");
    scanf("%d",&soni);
    Talaba *student;
    char n=getchar();
    student=malloc(soni*sizeof(Talaba));
    
    for(int i=0; i<soni; i++)
        student[i]=kirit();
    
    for(int j=0; j<soni; j++)
        chiqar(student[j]);
    return 0;
}
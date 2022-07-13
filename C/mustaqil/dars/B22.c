#include<stdio.h>
int main(){
  int num;
  printf("Son kriting >> ");
  scanf("%d", &num);
  if(num<10 && num>0){
    if(num==1)
      printf("Bir");
    else if(num==2)
      printf("Ikki");
    else if(num==3)
      printf("Uch");
    else if(num==4)
      printf("To'rt");
    else if(num==5)
      printf("Besh");
    else if(num==6)
      printf("Olti");
    else if(num==7)
      printf("Yetti");
    else if(num==8)
      printf("sakkiz");
    else if(num==9)
      printf("To'qqiz");
  }
  else{
    printf("Faqat 1-10 oraasidagi son kiriting");
  }
  return 0;
}
#include <stdio.h>
int main(){
    int qoldiq,son,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a0=0;
    scanf("%d",&son);
    while (son>0)
    {
        qoldiq=son%10;
        if(qoldiq==0)
            a0++;
        else if(qoldiq==1)
            a1++;
        else if(qoldiq==2)
            a2++;
        else if(qoldiq==3)
            a3++;
        else if(qoldiq==4)
            a4++;
        else if(qoldiq==5)
            a5++;
        else if(qoldiq==6)
            a6++;
        else if(qoldiq==7)
            a7++;
        else if(qoldiq==8)
            a8++;
        else if(qoldiq==9)
            a9++;
        son/=10;
    }

    printf("Son 0: %d marta\nSon 1: %d marta\nSon 2: %d marta\nSon 3: %d marta\nSon 4: %d marta\nSon 5: %d marta\nSon 6: %d marta\nSon 7: %d marta\nSon 8: %d marta\nSon 9: %d marta\n",a0,a1,a2,a3,a4,a5,a6,a7,a8,a9);
}
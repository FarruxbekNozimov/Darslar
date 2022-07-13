#include<stdio.h>  

int main(){    

    //Foydalanuvchi nomanfiy son kiritadi. Shu sonning raqamlari yig'indisini toping.
    int n,sum=0,m;    
    printf("Son kiriting:");    
    scanf("%d",&n);    

    while(n>0){    
        m=n%10;    
        sum=sum+m;    
        n=n/10;    
    }    
 
    printf("jami >> %d",sum);    
    return 0;  
}   
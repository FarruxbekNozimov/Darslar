#include<stdio.h> 
#include<math.h> 

int main() 
{ 
    float a; 
    printf("Sonni kiriting\n"); 
    scanf("%f",&a); 

    int x = ceil(a); 
    if ( x == a){ 
        printf("Butun son\n"); 
    }else{ 
        printf("haqiqiy son\n"); 
    } 
    return 0; 
} 
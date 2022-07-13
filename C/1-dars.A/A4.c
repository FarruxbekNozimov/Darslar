
#include<stdio.h>

int main(){
	int eni,boyi,p1,p2,javob;
    eni = 19;
    boyi = 23;
    p1 = 2*(eni+boyi);
    eni -= 4;
    boyi += 8;
    p2 = 2*(eni+boyi);
    javob = p2 - p1;

    printf("%d",javob);


}
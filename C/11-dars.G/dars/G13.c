#include <stdio.h>

int main(){
	int son;
	scanf("%d",&son);

	for(int i=1;i<=son;i++){
		for(int j=son;j>=i;j--){
			printf("%d",j);
		}
    	printf("\n");
	}

	return 0;
}
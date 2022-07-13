#include <stdio.h>

int main(){
	int son;
	scanf("%d",&son);

	for (int i = son; i >= 1; i--){
		for (int k = son; k >= i; k--){
			printf(" ");
		}
		for (int j = 1; j <= i; j++){
			printf("%d",j);
		}
		printf("\n");
	}
	printf("\n");


	return 0;
}
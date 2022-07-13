#include <stdio.h>

int main(){
	int son;
	scanf("%d",&son);

	for (int i = 1; i <= son ; i++){
		for (int k = 1; k <= son-i; ++k){
			printf(" ");
		}
		for (int j = 1; j <= i; j++){
			printf("%d",j);
		}
		printf("\n");

	}

	return 0;
}
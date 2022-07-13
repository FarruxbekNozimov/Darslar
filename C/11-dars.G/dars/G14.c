#include <stdio.h>

int main(){
	int son;
	scanf("%d",&son);

	for (int i = 1; i <= son ; i++){
		for (int j = 1; j <= i; j++){
			printf("%d",i);
		}
		printf("\n");

	}

	return 0;
}
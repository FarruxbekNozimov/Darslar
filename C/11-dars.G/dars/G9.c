#include <stdio.h>

int main(){
	int son;
	scanf("%d",&son);

	for (int i = 1; i <= son; i++){
		for (int j = 1; j <= son; j++){
			if (i == 1 || i == son || j == 1 || j == son)
				printf("1 ");
			else
				printf("0 ");
		}
		printf("\n");
	}

	return 0;
}
#include <stdio.h>

int main(){

	int son;
	scanf("%d",&son);

	for (int i = son; i >=1; i--){
		for (int j = i; j >= 1; j--){
			printf("%d",j);
		}
		printf("\n");
	}

	return 0;
}
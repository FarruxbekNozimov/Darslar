#include <stdio.h>

int main() {

    int sonlar[100] = {3, 5, -4, 0, 15, 88, -2, -9, 7, -1};
    int i, element, index, n = 11;
    scanf("%d %d", &index, &element);


    for (i = n-1; i >= index; i--){
        sonlar[i] = sonlar[i - 1];
    }
    sonlar[index - 1] = element;

    for (i = 0; i < n; i++){
        printf("%d ", sonlar[i]);
    }

	return 0;
}

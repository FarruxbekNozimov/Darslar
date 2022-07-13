#include <stdio.h>
#define height 20

int width = 2 * height - 1;
int abs(int d){
	return d < 0 ? -1 * d : d;
}

// 'A' ni chiqarish uchun
void printA() {
	int n = width / 2, i, j;
	for (i = 0; i < height; i++) {
		for (j = 0; j <= width; j++) {
			if (j == n || j == (width - n)
				|| (i == height / 2 && j > n
					&& j < (width - n)))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
		n--;
	}
}

// 'B' ni chiqarish uchun
void printB() {
	int i, j, half = (height / 2);
	for (i = 0; i < height; i++) {
		printf("*");
		for (j = 0; j < width; j++) {
			if ((i == 0 || i == height - 1 || i == half)
				&& j < (width - 2))
				printf("*");
			else if (j == (width - 2)
					&& !(i == 0 || i == height - 1
						|| i == half))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}

// 'F' ni chiqarish uchun
void printF() {
	int i, j;
	for (i = 0; i < height; i++) {
		printf("*");
		for (j = 0; j < height; j++) {
			if ((i == 0) || (i == height / 2
							&& j <= height / 2))
				printf("*");
			else
				continue;
		}
		printf("\n");
	}
}

// 'M' ni chiqarish uchun
void printM() {
	int i, j, counter = 0;
	for (i = 0; i < height; i++) {
		printf("*");
		for (j = 0; j <= height; j++) {
			if (j == height)
				printf("*");
			else if (j == counter
					|| j == height - counter - 1)
				printf("*");
			else
				printf(" ");
		}
		if (counter == height / 2) {
			counter = -99999;
		}
		else
			counter++;
		printf("\n");
	}
}

// 'O' ni chiqarish uchun
void printO() {
	int i, j, space = (height / 3);
	int width = height / 2 + height / 5 + space + space;
	for (i = 0; i < height; i++) {
		for (j = 0; j <= width; j++) {
			if (j == width - abs(space)
				|| j == abs(space))
				printf("*");
			else if ((i == 0
					|| i == height - 1)
					&& j > abs(space)
					&& j < width - abs(space))
				printf("*");
			else
				printf(" ");
		}
		if (space != 0
			&& i < height / 2) {
			space--;
		}
		else if (i >= (height / 2 + height / 5))
			space--;
		printf("\n");
	}
}

// 'R' ni chiqarish uchun
void printR() {
	int i, j, half = (height / 2);
	for (i = 0; i < height; i++) {
		printf("*");
		for (j = 0; j < width; j++) {
			if ((i == 0 || i == half)
				&& j < (width - 2))
				printf("*");
			else if (j == (width - 2)
					&& !(i == 0 || i == half))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
// 'U' ni chiqarish uchun
void printU() {
	int i, j;
	for (i = 0; i < height; i++) {
		if (i != 0 && i != height - 1)
			printf("*");
		else
			printf(" ");
		for (j = 0; j < height; j++) {
			if (((i == height - 1)
				&& j >= 0
				&& j < height - 1))
				printf("*");
			else if (j == height - 1 && i != 0
					&& i != height - 1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
// 'K' ni chiqarish uchun
void printK() {
    int i, j, half = height / 2, dummy = half;
    for (i = 0; i < height; i++) {
        printf("*");
        for (j = 0; j <= half; j++) {
            if (j == abs(dummy))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        dummy--;
    }
}

void printPattern() {
		printA();
        printf("\n");
		printR();
        printf("\n");
		printA();
        printf("\n");
		printF();
        printf("\n");
		printA();
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

		printM();
        printf("\n");
		printU();
        printf("\n");
		printB();
        printf("\n");
		printO();
        printf("\n");
		printR();
        printf("\n");
		printA();
        printf("\n");
		printK();
        printf("\n");
}

int main(){
    printPattern('A');
    return 0;
}
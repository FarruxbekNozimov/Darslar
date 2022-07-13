#include <stdio.h>

int main() {

  int n, teskari = 0, son;

  printf("Sonni kiriting: ");
  scanf("%d", &n);

  while (n != 0) {
    son = n % 10;
    teskari = teskari * 10 + son;
    n /= 10;
  }

  printf(">>> %d", teskari);

  return 0;
}
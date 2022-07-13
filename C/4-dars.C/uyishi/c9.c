#include <stdlib.h>
#include <stdio.h>

int main() {
  int i, n, s = 0;
  printf("input n: ");
  scanf("%d", &n);
  if (n < 0) {
    printf(" Not natural number"); return 0;
  }

  for (i = 1; i <= n; i++)
    s = s + i * i;
  printf("s is: %d", s);
  return 0;
}
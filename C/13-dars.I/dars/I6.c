#include <stdio.h>
int main() {
  int a[10][10], transpose[10][10], r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);

  // asssigning elements to the matrix
  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }

  // printing the matrix a[][]
  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("%d  ", a[i][j]);
    if (j == c - 1)
    printf("\n");
  }

  // computing the transpose
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    transpose[j][i] = a[i][j];
  }

  // printing the transpose
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; ++i)
  for (int j = 0; j < r; ++j) {
    printf("%d  ", transpose[i][j]);
    if (j == r - 1)
    printf("\n");
  }
  return 0;
}

// #include <stdio.h>

// int main(){
    
//     int i, j;
//     int sonlar[4][3] = {
//         {1, 2, 3}, 
//         {4, 5, 6}, 
//         {7, 8, 9}
//     };
//     int ustun = sizeof(sonlar[0]) / 4;
//     int qator = sizeof(sonlar)/4/ustun;
    
//     for (i = 0; i < qator; i++){                                 
//         for (j = 0; j < ustun; j++){                         
//             printf("%d ", sonlar[j][i]);
//         }
//         printf("\n");
//     }
    
//     return 0;
// } 
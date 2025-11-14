// Pragati Shelke 25070521108

#include <stdio.h>
void main() {
  int rows, cols;
  printf("Enter no of rows, columns: ");

  scanf("%d %d", &rows, &cols);
  int mat[rows][cols];
  printf("Enter elements of matrix:");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      scanf("%d", &mat[i][j]);
    }
  }
  if (rows != cols) {
    printf("Matrix must be square matrix\n");
    return;
  }
  int isLTM = 1;
  for (int i = 0; i < rows; i++) {
    for (int j = cols - 1; j > i; j--) {
      if (mat[i][j] != 0) {
        isLTM = 0;
      }
    }
  }

  if (isLTM == 1) {
    printf("Lower triangular matrix\n");

  } else {
    printf("Not a lower triangular matrix\n");
  }
}

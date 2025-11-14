// Pragati Shelke 25070521108
#include <math.h>
#include <stdio.h>

int main() {
  float a, b, c, D, root1, root2;
  printf("Enter coefficients a, b and c: ");
  scanf("%f %f %f", &a, &b, &c);
  D = (b * b) - 4 * a * c;
  if (D >= 0) {
    if (D == 0) {
      root1 = (-1 * b + D) / 2 * a;
      root2 = (-1 * b + D) / 2 * a;
      printf("root1 = root2 = %.2f", root2);
    }

    else {
      root1 = (-1 * b + D) / 2 * a;
      root2 = (-1 * b - D) / 2 * a;
      printf("root1 = %.2f and root2 = %.2f", root1, root2);
    }
  } else {
    printf("root1 = %.2f+%.2fi and root2 = %.2f%.2fi", (-1 * b) / (2.0 * a),
           sqrt(-1 * D) / (2 * a), (-1 * b) / (2.0 * a),
           -1 * sqrt(-1 * D) / (2 * a));
  }
  return 0;
}

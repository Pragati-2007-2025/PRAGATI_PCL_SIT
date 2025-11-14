// Swarangi Pathak 25070521079

#include <stdio.h>
int factorial(int n) {
  if (n == 1 || n == 0) {
    return 1;
  }

  // Write your code here
  int k = factorial(n - 1);
  return n * k;
}
int main() {
  int T, no;
  scanf("%d", &T);
  while (T--) {
    scanf("%d", &no);
    printf("%d\n", factorial(no));
  }
  return 0;
}

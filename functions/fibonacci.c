// Pragati Shelke 25070521108
#include <stdio.h>

// Recursive function to print Fibonacci numbers
void printFibonacci(int n, int t1, int t2) {
  if (t1 == 0) {
    printf("%d %d ", t1, t2);
  }
  if (n <= 2) {
    return;
  }
  printf("%d ", t1 + t2);
  // Write your code...

  printFibonacci(n - 1, t2, t1 + t2);
}

int main() {
  int n;

  // Input: Read the number of terms
  scanf("%d", &n);

  // Start the recursion with the first two Fibonacci numbers (0 and 1)
  printFibonacci(n, 0, 1);

  return 0;
}

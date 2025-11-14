// Swarangi Pathak 25070521079

#include <stdio.h>

void main() {
  int n, sum = 0, counter = 0;
  scanf("%d", &n);
  while (n != 0) {
    counter++;
    sum = sum + n % 10;
    n = n / 10;
  }
  if (counter == 5) {
    printf("%d", sum);

  } else {
    printf("Invalid input");
  }
}

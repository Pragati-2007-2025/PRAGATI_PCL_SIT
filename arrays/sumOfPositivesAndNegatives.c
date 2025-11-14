// Swarangi Pathak 25070521079
#include <stdio.h>

void main() {
  int n, sump = 0, sumn = 0, i;
  scanf("%d", &n);
  int arr[n];
  for (i = 0; i < n; i++) {
    int p;
    scanf("%d", &p);
    arr[i] = p;
  }
  for (i = 0; i < n; i++) {
    if (arr[i] > 0) {
      sump = sump + arr[i];
    } else {
      sumn = sumn + arr[i];
    }
  }
  printf("%d\n", sump);
  printf("%d\n", sumn);
}

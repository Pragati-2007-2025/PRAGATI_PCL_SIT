// Pragati Shelke 25070521108

#include <math.h>
#include <stdio.h>

void main() {
  int n, i;
  float sum = 0;
  printf("Enter the number of values: ");
  scanf("%d", &n);

  float arr[n];
  float mean, variance, deviation;
  printf("Enter values : ");
  for (i = 0; i < n; i++) {
    float b;
    scanf("%f", &b);
    arr[i] = b;
  }
  for (i = 0; i < n; i++) {
    sum = sum + arr[i];
  }

  mean = sum / n;
  float k = 0;

  for (i = 0; i < n; i++) {
    k = k + ((arr[i] - mean) * (arr[i] - mean) / n);
  }

  deviation = sqrt(k);

  printf("Mean = %.2f\n", mean);
  printf("Variance = %.2f\n", k);
  printf("Deviation  = %.2f\n", deviation);
}

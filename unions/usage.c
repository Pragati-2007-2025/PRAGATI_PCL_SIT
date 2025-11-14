// Pragati Shelke 25070521108
#include <stdio.h>

union test {
  // initialize required variables
  int x;
  int y;
};

// write your code here
int main() {
  union test t;
  t.x = 0;

  printf("x: ");
  // accept user input for x and assign it to the union variable x
  scanf("%d", &t.x);
  t.y = t.x;

  printf("After making x = %d:\nx= %d y= %d\n", t.x, t.x, t.y);
  printf("y: ");
  scanf("%d", &t.y);
  // accept user input for y and assign it to the union variable y

  printf("After making y = %d:\nx= %d y= %d", t.y, t.x, t.y);
  return 0;
}

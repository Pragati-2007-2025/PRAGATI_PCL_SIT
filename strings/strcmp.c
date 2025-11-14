// Pragati Shelke 25070521108
#include <stdio.h>
#include <string.h>

int main() {
  char str1[100]; // First string
  char str2[100]; // Second string

  scanf("%s %s", str1, str2);
  // scanf("%s")
  int result = strcmp(str1, str2);

  // Type your content here

  if (result == 0) {
    printf("equal\n");
  } else if (result < 0) {
    printf("str1 is less than str2\n");
  } else {
    printf("str1 is greater than str2\n");
  }

  return 0;
}

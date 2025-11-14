// Swarangi Pathak 25070521079
#include <stdio.h>
#include <string.h>

int main() {
  char str1[100]; // First string
  char str2[100]; // Second string

  // Type your code here

  scanf("%s", str1);
  scanf("%s", str2);

  strcat(str1, str2);

  // Print the concatenated result
  printf("%s\n", str1);

  return 0;
}

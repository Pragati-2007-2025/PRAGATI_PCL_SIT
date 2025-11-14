// Pragati Shelke 25070521108
#include <stdio.h>

// Function to compare two strings
int compareStrings(char str1[], char str2[]) {
  // write your code here
  int a = 0, b = 0;
  while (str1[a] != '\0') {
    a++;
  }
  while (str2[b] != '\0') {
    b++;
  }
  if (a != b) {
    return 1;
  }
  for (int i = 0; i < a; i++) {
    if (str1[i] != str2[i]) {
      return 1;
    }
  }
  return 0;
}

// Function to find the longer string
void findLongerString(char str1[], char str2[]) {
  int a = 0, b = 0;
  while (str1[a] != '\0') {
    a++;
  }
  while (str2[b] != '\0') {
    b++;
  }
  printf("Longer string: %s\n", a > b ? str1 : str2);
}

// Function to concatenate two strings
void concatenateStrings(char str1[], char str2[], char result[]) {
  // write your code here
  // return strcat(str1,str2);
  int a = 0, b = 0;
  while (str1[a] != '\0') {
    a++;
  }
  while (str2[b] != '\0') {
    b++;
  }

  for (int i = 0; i < a; i++) {
    result[i] = str1[i];
  }
  for (int i = 0; i < b; i++) {
    result[a + i] = str2[i];
  }
}

// Function to find occurrence of substring in the main string
int findSubstring(char mainStr[], char subStr[]) {
  // write your code here
  // return strcspn(str1,str2);
  int a = 0, b = 0;
  while (mainStr[a] != '\0') {
    a++;
  }
  while (subStr[b] != '\0') {
    b++;
  }
  int same = 0, idx = 0;
  for (int i = 0; i < a; i++) {
    if (mainStr[i] == subStr[0]) {
      same = 1;
      idx = i;
      for (int k = 0; k < b; k++) {
        if (mainStr[i + k] != subStr[k]) {
          same = 0;
        }
      }
      if (same == 1) {
        break;
      }
    }
  }
  if (same != 0) {
    return idx;
  } else {
    return -1;
  }
}

int main() {
  char str1[100], str2[100], result[200];
  int compare, substringIndex;

  // Input two strings from console
  printf("Enter first string: ");
  scanf("%s", str1);
  printf("Enter second string (substring): ");
  scanf("%s", str2);

  // Compare the strings
  compare = compareStrings(str1, str2);
  if (compare == 0) {
    printf("Strings are equal\n");
  } else {
    printf("Strings are not equal\n");
  }

  // Find the longer string
  findLongerString(str1, str2);

  // Concatenate the strings
  concatenateStrings(str1, str2, result);
  printf("Concatenated string: %s\n", result);

  // Find occurrence of substring in the first string
  substringIndex = findSubstring(str1, str2);
  if (substringIndex != -1) {
    printf("Substring found at index: %d\n", substringIndex);
  } else {
    printf("Substring not found in the first string\n");
  }

  return 0;
}

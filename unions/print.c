// Pragati Shelke 25070521108
#include <stdio.h>

// Enum to track the type of data stored in the union
enum Type { INTEGER, FLOATING_POINT };

// Union definition
union Data {
  int integer;
  float floating_point;
};

struct Eve {
  enum Type type;
  union Data data;
};
// Structure definition to track the type of data stored in the union

int main() {
  // Initialize and print the union variables
  struct Eve s1, s2;
  scanf("%d", &s1.data.integer);
  s1.type = INTEGER;

  // Input for variable1

  // Clear the input buffer
  while (getchar() != '\n') {
  };

  // Input for variable2
  scanf("%f", &s2.data.floating_point);
  s2.type = FLOATING_POINT;

  // Print variable1
  if (s1.type == INTEGER) {
    printf("%d\n", s1.data.integer);
  } else {
    printf("%0.2f\n", s1.data.floating_point);
  }

  // Print variable2
  if (s2.type == INTEGER) {
    printf("%d\n", s2.data.integer);
  } else {
    printf("%0.1f\n", s2.data.floating_point);
  }

  return 0;
}

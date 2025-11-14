// Swarangi Pathak 25070521079
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;

    // Read number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory dynamically
    arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocated properly
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Read array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print array elements
    printf("Array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Free memory
    free(arr);

    return 0;
}


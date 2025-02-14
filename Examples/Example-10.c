#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n;
    
    // Get the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    // Allocate memory dynamically
    arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    // Input elements
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Print elements
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Free allocated memory
    free(arr);
    printf("Memory freed successfully.\n");
    
    return 0;
}

#include <stdio.h>

// Function to traverse an array using pointers
void traverseArray(int *arr, int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i)); // Accessing array elements using pointer arithmetic
    }
    printf("\n");
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    // Call function to traverse array using pointer
    traverseArray(numbers, size);
    
    return 0;
}

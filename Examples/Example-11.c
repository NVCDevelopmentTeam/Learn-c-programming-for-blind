#include <stdio.h>

int main() {
    int n, sum = 0;
    
    // Get the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input elements using a loop
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Calculate sum using a loop
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    // Print the sum
    printf("Sum of array elements: %d\n", sum);
    
    return 0;
}

#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int *ptr1 = &a, *ptr2 = &b;
    
    // Display the values and addresses
    printf("Value of a: %d, Address of a: %p\n", a, (void*)ptr1);
    printf("Value of b: %d, Address of b: %p\n", b, (void*)ptr2);
    
    // Swap values using pointers
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    
    // Display swapped values
    printf("After swapping:\n");
    printf("Value of a: %d, Address of a: %p\n", a, (void*)ptr1);
    printf("Value of b: %d, Address of b: %p\n", b, (void*)ptr2);
    
    return 0;
}

#include <stdio.h>
#include <stdbool.h> // Include library for boolean type

// Function prototype for prime number check
bool is_prime(int num);

int main() {
    int num;
    
    // Display a welcome message
    printf("Welcome to the Prime Number Checker!\n");
    
    // Prompt user to enter a number
    printf("Enter an integer number to check: ");
    scanf("%d", &num);
    
    // Check if the number is prime
    if (is_prime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}

// Function to check if a number is prime
bool is_prime(int num) {
    if (num < 2) return false; // Numbers less than 2 are not prime
    for (int i = 2; i * i <= num; i++) { // Check divisibility up to sqrt(num)
        if (num % i == 0) {
            return false; // If divisible, it's not a prime number
        }
    }
    return true; // If no divisors found, it's a prime number
}

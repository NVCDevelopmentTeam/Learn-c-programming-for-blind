#include <stdio.h>

// Function prototypes
void add(double num1, double num2);
void subtract(double num1, double num2);
void multiply(double num1, double num2);
void divide(double num1, double num2);

int main() {
    char operator;
    double num1, num2;

    // Display a welcome message
    printf("Welcome to the simple calculator!\n");

    // Prompt user to enter an operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Prompt user to enter two numbers
    printf("Enter two numbers separated by space: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform the operation based on the operator
    switch (operator) {
        case '+':
            add(num1, num2);
            break;
        case '-':
            subtract(num1, num2);
            break;
        case '*':
            multiply(num1, num2);
            break;
        case '/':
            divide(num1, num2);
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}

// Function to perform addition
void add(double num1, double num2) {
    double result = num1 + num2;
    printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
}

// Function to perform subtraction
void subtract(double num1, double num2) {
    double result = num1 - num2;
    printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
}

// Function to perform multiplication
void multiply(double num1, double num2) {
    double result = num1 * num2;
    printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
}

// Function to perform division
void divide(double num1, double num2) {
    if (num2 != 0) {
        double result = num1 / num2;
        printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

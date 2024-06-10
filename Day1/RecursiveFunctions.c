Activity 1:

#include <stdio.h>

// Function prototype
unsigned long long factorial(int n);

int main() {
    int number;
    
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %llu\n", number, factorial(number));
    }

    return 0;
}

// Recursive function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0) {
        return 1; // Base case: 0! is 1
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}


Activity 2:

#include <stdio.h>

// Function prototype
unsigned long long fibonacci(int n);

int main() {
    int number;
    
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Fibonacci is not defined for negative numbers.\n");
    } else {
        printf("Fibonacci number %d is %llu\n", number, fibonacci(number));
    }

    return 0;
}

// Recursive function to calculate the nth Fibonacci number
unsigned long long fibonacci(int n) {
    if (n == 0) {
        return 0; // Base case: F(0) is 0
    } else if (n == 1) {
        return 1; // Base case: F(1) is 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
    }
}

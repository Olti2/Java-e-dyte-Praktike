Activity 1:

#include <stdio.h>

// Function to find the GCD of two numbers using recursion
int gcd(int a, int b) {
    // Base case: if the second number becomes 0, the first number is the GCD
    if (b == 0) {
        return a;
    }
    // Recursive case: call gcd with b and the remainder of a divided by b
    return gcd(b, a % b);
}

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    // Ensure the inputs are positive for the GCD function
    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;

    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
    return 0;
}


Activity 2:

#include <stdio.h>

// Function to calculate base^exponent using recursion
double power(double base, int exponent) {
    // Base case: any number to the power of 0 is 1
    if (exponent == 0) {
        return 1.0;
    }
    // If the exponent is negative, handle it by inverting the base
    if (exponent < 0) {
        return 1 / power(base, -exponent);
    }
    // Recursive case: base^exponent = base * base^(exponent-1)
    return base * power(base, exponent - 1);
}

int main() {
    double base;
    int exponent;
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    printf("%lf raised to the power of %d is %lf\n", base, exponent, power(base, exponent));
    return 0;
}


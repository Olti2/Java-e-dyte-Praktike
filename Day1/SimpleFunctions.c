Activity 1:

#include <stdio.h>

int add(int a, int b);

int main() {
    int num1 = 3;
    int num2 = 5;
    int result = add(num1, num2);
    printf("The sum of %d and %d is %d\n", num1, num2, result);
    return 0;
}

int add(int a, int b) {
    return a + b;
}



Activity 2:

#include <stdio.h>

// Function declaration
int isEven(int num);

// Main function to test the isEven function
int main() {
    int num = 4;
    if (isEven(num)) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
    
    num = 7;
    if (isEven(num)) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
    
    return 0;
}

// Function definition
int isEven(int num) {
    return num % 2 == 0;
}

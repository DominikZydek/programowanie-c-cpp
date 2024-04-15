#include <stdio.h>

// Declarations
int addition(int a, int b);
int multiplication(int a, int b);
int subtraction(int a, int b);

int main() {
    // Pointer to a function
    int (*function)(int, int);

    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Multiplication\n");
    printf("3. Subtraction\n");
    int choice;
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            function = addition;
            break;
        case 2:
            function = multiplication;
            break;
        case 3:
            function = subtraction;
            break;
        default:
            printf("Invalid operation choice.\n");
            return 1;
    }

    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calling the function through the pointer
    int result = function(num1, num2);
    printf("Result: %d\n", result);

    return 0;
}

// Definitions
int addition(int a, int b) {
    return a + b;
}

int multiplication(int a, int b) {
    return a * b;
}

int subtraction(int a, int b) {
    return a - b;
}

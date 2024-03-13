#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    printf("Factorial of %i = %i\n", 5, factorial(5));
    printf("Factorial of %i = %i\n", 10, factorial(10));
    return 0;
}

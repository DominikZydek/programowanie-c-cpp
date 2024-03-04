#include <stdio.h>

int main() {

    int x = 7;
    int *pX = &x;

    *pX = 4;

    // normally
    printf("%i\n", x);

    // using a pointer
    printf("%i\n", *pX);

    return 0;
}

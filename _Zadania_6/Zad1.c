#include <stdio.h>

union Data {
    int integer;
    float floating_point;
    char character;
};

int main() {
    union Data myUnion;

    myUnion.integer = 10;
    printf("Value of type int: %d\n", myUnion.integer);

    myUnion.floating_point = 3.14;
    printf("Value of type float: %.2f\n", myUnion.floating_point);

    myUnion.character = 'A';
    printf("Character: %c\n", myUnion.character);

    return 0;
}

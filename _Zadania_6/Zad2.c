#include <stdio.h>

int main() {
    int array[10];

    for (int i = 0; i < 10; i++) {
        array[i] = i;
    }

    int *ptr = array;

    for (int i = 0; i < 10; i++) {
        printf("Value of array[%d]: %d\n", i, *ptr);
        ptr++;
    }

    return 0;
}

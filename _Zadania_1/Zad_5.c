#include <stdio.h>

int sumNaturalNums(int limit) {

    if (limit < 0) {
        return 0;
    }

    int sum = 0;
    for (int i = 1; i < limit; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            printf("%i\n", i);
            sum += i;
        }
    }
    printf("\n");

    return sum;
}

int main() {

    printf("Sum: %i", sumNaturalNums(10));

    return 0;
}

#include <stdio.h>

void doubleFloat(float *f) {
    *f *= 2;
}

int main() {

    float f = 3.7;
    printf("%f\n", f);

    doubleFloat(&f);
    printf("%f\n", f);

    return 0;
}

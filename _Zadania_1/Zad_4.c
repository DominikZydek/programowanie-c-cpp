#include <stdio.h>
#include <string.h>

int main() {
    char text [8];
    for (int i = 1; i <= 200; i++) {
        if (i % 5 == 0 && i % 7 == 0) {
            strcpy(text, "FooBar");
        } else if (i % 5 == 0) {
            strcpy(text, "Foo");
        } else if (i % 7 == 0) {
            strcpy(text, "Bar");
        } else {
            strcpy(text, "");
        }
        printf("%i - %s\n", i, text);
    }
    return 0;
}

#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

void movePoint(Point *p, int xValue, int yValue) {
    p -> x += xValue;
    p -> y += yValue;
}

typedef struct {
    int x;
    int y;
} Rectangle;

void printInfo(Rectangle r) {
    int area = r.x * r.y;
    int perimeter = 2 * r.x + 2 * r.y;

    printf("Area: %i\n", area);
    printf("Perimeter: %i\n", perimeter);
}

int main() {

    Point p = {1, 6};
    printf("Point p - x: %i, y: %i\n", p.x, p.y);

    movePoint(&p, 2, -4);
    printf("Point p - x: %i, y: %i\n", p.x, p.y);

    printf("\n");

    Rectangle r = {3, 5};
    printf("Rectangle r - x: %i, y: %i\n", r.x, r.y);

    printInfo(r);

    return 0;
}

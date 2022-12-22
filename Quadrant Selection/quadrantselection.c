#include <stdio.h>

int main() {
    int x, y, quadrant;
    scanf("%d", &x);
    scanf("%d", &y);

    if (x > 0 && y > 0) {
        quadrant = 1;
    } else if (x < 0 && y > 0) {
        quadrant = 2;
    } else if (x < 0 && y < 0) {
        quadrant = 3;
    } else {
        quadrant = 4;
    }

    printf("%d", quadrant);
}
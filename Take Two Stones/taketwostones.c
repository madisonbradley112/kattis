#include <stdio.h>

int main() {
    int stones;
    scanf("%d", &stones);

    if (stones % 2 == 0) {
        printf("Bob");
    } else {
        printf("Alice");
    }
}
#include <stdio.h>

int main() {
    char first, second, third;
    scanf("%c%c%c", &first, &second, &third);

    if (first == '5' && second == '5' && third == '5') {
        printf("1");
    } else {
        printf("0");
    }
}
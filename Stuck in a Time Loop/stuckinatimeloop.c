#include <stdio.h>

int main() {
    int num = 0;

    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        printf("%d Abracadabra\n", i);
    }
}
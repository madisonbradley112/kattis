#include <stdio.h>
int main() {
    int R;
    int S;
    scanf("%d", &R);
    scanf("%d", &S);

    S *= 2;
    S -= R;

    printf("%d", S);
}
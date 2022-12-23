#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    double qaly = 0;
    for (int i = 0; i < n; i++) {
        double quality, years;
        scanf("%lf %lf", &quality, &years);
        qaly += quality * years;
    }

    printf("%f", qaly);
}
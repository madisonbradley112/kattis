#include <stdio.h>

int main() {
    int numInputs;
    scanf("%d", &numInputs);

    int num, n = 0;
    double total = 0.0;
    for (int i = 0; i < numInputs; i++) {
        scanf("%d", &num);
        if (num != -1 ) {
            total = total + (double)num;
            n++;
        }
    }

    printf("%.17f", total/(double)n);
}
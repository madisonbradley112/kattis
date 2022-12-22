#include <stdio.h>

int main() {
    int inputAmt;
    scanf("%d", &inputAmt);

    for (int i = 0; i < inputAmt; i++) {
        int num, days, final;
        scanf("%d %d", &num, &days);

        // closed form summation
        final = (days*(days+1))/2 + days;
        printf("%d %d\n", num, final);
    }
}
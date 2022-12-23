#include <stdio.h>

int main() {
    int allowedMegabytes;
    int numberOfMonths;

    scanf("%d", &allowedMegabytes);
    scanf("%d", &numberOfMonths);

    int runningTotal = 0;
    for (int i = 0; i < numberOfMonths; i++) {
        int thisMonth;
        scanf("%d", &thisMonth);
        runningTotal = runningTotal - thisMonth + allowedMegabytes;
    }

    runningTotal += allowedMegabytes; // adding mb for the last month
    printf("%d", runningTotal);
}
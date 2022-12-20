#include <math.h>
#include <stdio.h>

int main() {
    // last digit of number is the power
    int total = 0;
    int number;
    int readable, numRead = 0;
    scanf("%d", &readable);
 
    while(numRead < readable) {
        scanf("%d", &number);
        int power = number % 10;
        number /= 10;
        number = pow(number, power);
        total = total + number;
        numRead++;
    }

    printf("%d", total);
}
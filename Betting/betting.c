#include <stdio.h>

int main() {
    int optionOnePercent;
    scanf("%d", &optionOnePercent);

    double optionOnePayout, optionTwoPayout;
    optionOnePayout = 100/(double)optionOnePercent;
    optionTwoPayout = 100/(double)(100-optionOnePercent);

    printf("%.10f\n%.10f", optionOnePayout, optionTwoPayout);
}
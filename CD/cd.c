#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int jackCD, jillCD;
    bool cont = true;
    while (scanf("%d %d", &jackCD, &jillCD) == 2) {
        if (jackCD == 0 && jillCD == 0) {
            exit(0);
        }

        int sameCounter = 0;
        int jackCDs[jackCD]; 

        // read jack's data into array
        for (int i = 0; i < jackCD; i++) {
            scanf("%d", &jackCDs[i]);
        }

        // for each of jill's CDs, check if jack owns it
        int jackIndex = 0;
        for (int i = 0; i < jillCD; i++) {
            int currentCD;
            scanf("%d", &currentCD);

            while (jackCDs[jackIndex] < currentCD && jackIndex < jackCD) {
                jackIndex++;
            }

            if (jackCDs[jackIndex] == currentCD) {
                sameCounter++;
            }
        }
        printf("%d\n", sameCounter);
    }
}
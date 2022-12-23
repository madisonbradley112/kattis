#include <stdio.h>
#include <math.h>

int main() {
    int numMatches, width, height;
    double diagonal;
    scanf("%d %d %d", &numMatches, &width, &height);

    // get the diagonal
    diagonal = sqrt(pow((double) height, 2.0) + pow((double) width, 2.0));

    for (int i = 0; i < numMatches; i++) {
        int matchLength; 
        scanf("%d", &matchLength);
        if (matchLength <= diagonal) {
            printf("DA\n");
        } else {
            printf("NE\n");
        }
    }
}
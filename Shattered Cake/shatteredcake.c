#include <stdio.h>

int main() {
    int width, numPieces;
    scanf("%d", &width);
    scanf("%d", &numPieces);

    int area = 0;
    for (int i = 0; i < numPieces; i++) {
        int pieceWidth, pieceLength;
        scanf("%d %d", &pieceWidth, &pieceLength);
        area = area + (pieceWidth * pieceLength);
    }

    printf("%d", area/width);
}
#include <stdio.h>

int main() {
    int numInput;
    scanf("%d", &numInput);
    char word[100+1];

    for (int i = 1; i < numInput+1; i++) {
        scanf("%s", word);
        if (i % 2 != 0) {
            printf("%s\n", word);
        }
    }
}
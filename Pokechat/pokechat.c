#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getNumber() {
    int character = getchar();
    if (character < '0' || character > '9') {
        return -1;
    }
    int digit = ((character - '0') * 100);

    character = getchar();
    digit = digit + ((character - '0') * 10);

    character = getchar();
    digit = digit + (character - '0');
    return digit;
}

int main() {
    char encodingString[100];
    char ids[1000 + 1];
    char resultString[100];

    fgets(encodingString, 100, stdin);

    int num, resultIndex = 0;

    while ((num = getNumber()) > 0) {
        resultString[resultIndex] = encodingString[num - 1];
        resultIndex++;
    }

    resultString[resultIndex] = '\0';
    printf("%s\n", resultString);
}


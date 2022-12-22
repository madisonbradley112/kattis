#include <stdio.h>
#include <string.h>

int main() {
    char input[1001];
    char output[2001];

    scanf("%s", input);
    int outIndex = 0;
    for (int i = 0; i < strlen(input); i++) {
        if (input[i] == 'e') {
            output[outIndex] = 'e';
            output[outIndex + 1] = 'e';
            outIndex += 2;
        } else {
            output[outIndex] = input[i];
            outIndex += 1;
        }
    }
    output[outIndex] = '\0';
    printf("%s", output);
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int numInputs = 0;
    int numRead = 0;
    char input1[50];
    char input2[50];
    char output[50];
    scanf("%d", &numInputs);

    // process each case
    while (numRead < numInputs) {
        scanf("%s", input1);
        scanf("%s", input2);

        int i = 0;
        for (i = 0; i < strlen(input1); i++) {
            if (input1[i] == input2[i]) {
                output[i] = '.';
            } else {
                output[i] = '*';
            }
        }
        output[i] = '\0';

        printf("%s\n", input1);
        printf("%s\n", input2);
        printf("%s\n\n", output);

        numRead++;
        i = 0;
    }
}
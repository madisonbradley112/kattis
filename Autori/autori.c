#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char new[100];

    scanf("%s", name);

    int newIndex = 0;
    for(int i = 0; i < strlen(name); i++) {
        if (name[i] >= 'A' && name[i] <= 'Z') {
            // if capital, append to new arr
            new[newIndex] = name[i];
            newIndex++;
        }
    }

    new[newIndex] = '\0';
    printf("%s", new);

}
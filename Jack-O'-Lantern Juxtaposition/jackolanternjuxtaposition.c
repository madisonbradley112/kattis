#include <stdio.h>

int main() {
    int n, t, m;
    scanf("%d %d %d", &n, &t, &m);
    // number of unique designs is n*t*m
    printf("%d", n*t*m);
}
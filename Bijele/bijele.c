#include<stdio.h>
int main() {
    int pieces[6];
    int needed[6];
    for (int i = 0; i < 6; i++) {
        scanf("%d", &pieces[i]);
        
        if (i < 2) {
            needed[i] = 1;
        } else if (i <= 4) {
            needed[i] = 2;
        } else {
            needed[i] = 8;
        }
        
        needed[i] = -(pieces[i] - needed[i]);
        printf("%d ", needed[i]);
    }
}
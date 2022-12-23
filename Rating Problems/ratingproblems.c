#include <stdio.h>

int main() {
    int totalJudges, alreadyRated;
    scanf("%d %d", &totalJudges, &alreadyRated);

    int avg = 0;
    for (int i = 0; i < alreadyRated; i++) {
        int rating;
        scanf("%d", &rating);
        avg += rating;
    } 

    double max = ((double)avg + 3.0*(totalJudges - alreadyRated))/(double)totalJudges;
    double min = ((double)avg + -3.0*(totalJudges - alreadyRated))/(double)totalJudges;

    printf("%f %f", min, max);
}
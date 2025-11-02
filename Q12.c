#include <stdio.h>

int main() {
    int n, i, max, min;
    printf("Enter number of scores: ");
    scanf("%d", &n);

    int scores[n];
    printf("Enter %d scores: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &scores[i]);

    max = min = scores[0];

    for (i = 1; i < n; i++) {
        if (scores[i] > max)
            max = scores[i];
        if (scores[i] < min)
            min = scores[i];
    }

    printf("\nMaximum score: %d\n", max);
    printf("Minimum score: %d\n", min);

    printf("\nComparative logic like this helps identify trends and rankings,\n");
    printf("forming the basis of analysis systems used in education, health,\n");
    printf("and humanitarian projects to measure progress and impact.\n");

    return 0;
}


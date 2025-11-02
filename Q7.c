#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++)
            printf("%d", j % 2);
        printf(" ");
        for (j = 1; j <= i; j++)
            printf("%d", j % 2);
        printf("\n");
    }

    printf("\nBinary patterns like these represent how bits form structured data,\n");
    printf("a foundation for patterns in image processing, data compression,\n");
    printf("and humanitarian technologies that rely on efficient data storage.\n");

    return 0;
}


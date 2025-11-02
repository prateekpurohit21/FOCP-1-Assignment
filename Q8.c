#include <stdio.h>

int main() {
    int n, i;
    long long a = 0, b = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) {
        printf("%lld ", a);
        next = a + b;
        a = b;
        b = next;
    }

    printf("\n\nThe Fibonacci pattern reflects natural growth and balance,\n");
    printf("inspiring algorithms that optimize processes in robotics,\n");
    printf("artificial intelligence, and humanitarian technology.\n");

    return 0;
}


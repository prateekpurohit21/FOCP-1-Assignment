#include <stdio.h>

int main() {
    int n, i, j, count = 0, isPrime;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++) {
        if (arr[i] < 2)
            continue;
        isPrime = 1;
        for (j = 2; j * j <= arr[i]; j++) {
            if (arr[i] % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            count++;
    }

    printf("\nTotal prime numbers in the array: %d\n", count);

    printf("\nCounting primes reflects logical filtering in data systems,\n");
    printf("similar to how algorithms identify key elements in fields like\n");
    printf("cybersecurity, AI, and humanitarian analytics for better decisions.\n");

    return 0;
}

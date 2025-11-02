#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    if (n == 1)
        printf("Peak element: %d\n", arr[0]);
    else if (arr[0] >= arr[1])
        printf("Peak element: %d\n", arr[0]);
    else if (arr[n - 1] >= arr[n - 2])
        printf("Peak element: %d\n", arr[n - 1]);
    else {
        for (i = 1; i < n - 1; i++) {
            if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
                printf("Peak element: %d\n", arr[i]);
                break;
            }
        }
    }

    printf("\nFinding a peak reflects how systems detect stability points,\n");
    printf("used in signal processing, AI decision-making, and humanitarian\n");
    printf("monitoring tools that identify trends or critical moments.\n");

    return 0;
}

#include <stdio.h>

int main() {
    int n, i, last;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    last = arr[n - 1];
    for (i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];
    arr[0] = last;

    printf("\nArray after one clockwise rotation: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n\nCyclic rotations like this are used in scheduling systems and encryption,\n");
    printf("where elements or data shift positions to maintain balance, fairness,\n");
    printf("or security — essential in humanitarian and computational technologies.\n");

    return 0;
}

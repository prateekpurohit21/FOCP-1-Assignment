#include <stdio.h>

int main() {
    int n, i, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nChoose deletion position:\n1. Front\n2. Middle\n3. End\nEnter choice: ");
    scanf("%d", &pos);

    printf("\nOriginal Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    if (pos == 1) {
        for (i = 0; i < n - 1; i++)
            arr[i] = arr[i + 1];
        n--;
    } else if (pos == 2) {
        int mid = n / 2;
        for (i = mid; i < n - 1; i++)
            arr[i] = arr[i + 1];
        n--;
    } else if (pos == 3) {
        n--;
    } else {
        printf("\nInvalid choice.\n");
        return 0;
    }

    printf("\nArray after deletion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n\nDeleting elements demonstrates how systems manage limited memory,\n");
    printf("remove outdated data, and maintain efficiency — concepts used in\n");
    printf("real-time systems and humanitarian data management.\n");

    return 0;
}

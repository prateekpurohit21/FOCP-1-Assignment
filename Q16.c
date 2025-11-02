#include <stdio.h>

int main() {
    int n, i, pos, value;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nEnter the value to insert: ");
    scanf("%d", &value);

    printf("Choose position:\n1. Front\n2. Middle\n3. End\nEnter choice: ");
    scanf("%d", &pos);

    printf("\nOriginal Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    if (pos == 1) {
        for (i = n; i > 0; i--)
            arr[i] = arr[i - 1];
        arr[0] = value;
        n++;
    } else if (pos == 2) {
        int mid = n / 2;
        for (i = n; i > mid; i--)
            arr[i] = arr[i - 1];
        arr[mid] = value;
        n++;
    } else if (pos == 3) {
        arr[n] = value;
        n++;
    } else {
        printf("\nInvalid choice.\n");
        return 0;
    }

    printf("\nArray after insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n\nInsertion operations like these reflect how systems handle data updates,\n");
    printf("essential in real-time scheduling, data buffering, and humanitarian systems\n");
    printf("that adapt dynamically to new information.\n");

    return 0;
}

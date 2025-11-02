#include <stdio.h>

int main() {
    int n, i, j, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nDuplicate elements: ");
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                found = 1;
                break;
            }
        }
    }

    if (!found)
        printf("-1");

    printf("\n\nDetecting duplicates reflects how systems ensure data integrity,\n");
    printf("preventing redundancy and errors — vital in humanitarian databases\n");
    printf("and applications that rely on accurate, validated information.\n");

    return 0;
}

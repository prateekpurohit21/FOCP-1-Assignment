#include <stdio.h>

int main() {
    int n, i, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d scores: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++) {
        if (arr[i] == 99) {
            printf("The first occurrence of 99 is at position %d.\n", i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("The score 99 was not found in the array.\n");

    printf("\nLinear search reflects the importance of step-by-step data retrieval,\n");
    printf("a principle that supports fairness and traceability in systems used\n");
    printf("for education, healthcare, and other humanitarian technologies.\n");

    return 0;
}

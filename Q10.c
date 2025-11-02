#include <stdio.h>

int main() {
    int n, i, count = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);

    int marks[n];
    printf("Enter marks of %d students: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &marks[i]);

    printf("\nStudents who scored 99:\n");
    for (i = 0; i < n; i++) {
        if (marks[i] == 99) {
            printf("Student %d\n", i + 1);
            count++;
        }
    }

    if (count == 0)
        printf("No student scored 99.\n");
    else
        printf("\nTotal students who scored 99: %d\n", count);

    printf("\nCounting frequencies in data reflects the same logic used in\n");
    printf("analyzing survey responses, monitoring education outcomes,\n");
    printf("and designing data-driven humanitarian solutions.\n");

    return 0;
}

#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter two integers to swap: ");
    scanf("%d %d", &a, &b);

    printf("\nOriginal Values: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;
    printf("Using Temporary Variable: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("Using Arithmetic Operations: a = %d, b = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("Using Bitwise XOR: a = %d, b = %d\n", a, b);

    int *p = &a, *q = &b;
    temp = *p;
    *p = *q;
    *q = temp;
    printf("Using Pointers: a = %d, b = %d\n", a, b);

    printf("\nDifferent swap methods show how data can move in memory,\n");
    printf("the same concept used in systems managing limited resources\n");
    printf("for humanitarian technologies and embedded devices.\n");

    return 0;
}


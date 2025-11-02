#include <stdio.h>

int findHCF(int a, int b) {
    if (b == 0)
        return a;
    return findHCF(b, a % b);
}

int main() {
    int num1, num2, hcf;

    printf("Enter two integers to find their HCF: ");
    scanf("%d %d", &num1, &num2);

    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;

    hcf = findHCF(num1, num2);

    printf("The HCF (Highest Common Factor) of %d and %d is: %d\n", num1, num2, hcf);

    printf("\nJust like finding common ground between two numbers,\n");
    printf("technology strives to find common solutions that unite people,\n");
    printf("ensuring fairness, balance, and harmony in digital and human systems.\n");

    return 0;
}

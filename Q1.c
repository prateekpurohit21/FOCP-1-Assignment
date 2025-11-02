#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber, remainder, digits = 0;
    double result = 0.0;

    printf("Enter an integer to check if it is an Armstrong number: ");
    scanf("%d", &number);

    originalNumber = number;

    while (originalNumber != 0) {
        originalNumber /= 10;
        digits++;
    }

    originalNumber = number;

    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, digits);
        originalNumber /= 10;
    }

    if ((int)result == number)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    printf("\nJust like how each digit plays its part in forming an Armstrong number,\n");
    printf("every small act of precision and care helps build trustworthy digital systems\n");
    printf("— the foundation of humanitarian technology.\n");

    return 0;
}

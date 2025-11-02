#include <stdio.h>

int subtract(int a, int b) {
    while (b != 0) {
        int borrow = (~a) & b;
        a = a ^ b;
        b = borrow << 1;
    }
    return a;
}

int main() {
    int num1, num2;
    printf("Enter two integers to subtract (a - b): ");
    scanf("%d %d", &num1, &num2);

    int result = subtract(num1, num2);
    printf("Result of %d - %d = %d\n", num1, num2, result);

    printf("\nThis bitwise subtraction mirrors how processors perform arithmetic\n");
    printf("at the hardware level, ensuring precision and efficiency — the same logic\n");
    printf("used in embedded systems that power humanitarian technologies like\n");
    printf("medical devices, disaster sensors, and assistive robotics.\n");

    return 0;
}


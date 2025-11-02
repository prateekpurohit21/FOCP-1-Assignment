#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long binary) {
    int decimal = 0, i = 0, rem;
    while (binary != 0) {
        rem = binary % 10;
        decimal += rem * pow(2, i);
        binary /= 10;
        i++;
    }
    return decimal;
}

long long decimalToBinary(int decimal) {
    long long binary = 0;
    int rem, i = 1;
    while (decimal != 0) {
        rem = decimal % 2;
        decimal /= 2;
        binary += rem * i;
        i *= 10;
    }
    return binary;
}

int main() {
    int choice;
    printf("Choose conversion:\n1. Binary to Decimal\n2. Decimal to Binary\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        long long binary;
        printf("Enter a binary number: ");
        scanf("%lld", &binary);
        printf("Decimal equivalent: %d\n", binaryToDecimal(binary));
    } 
    else if (choice == 2) {
        int decimal;
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        printf("Binary equivalent: %lld\n", decimalToBinary(decimal));
    } 
    else
        printf("Invalid choice.\n");

    printf("\nConversions like these form the core of computer understanding,\n");
    printf("bridging human logic with machine language — vital in hardware design,\n");
    printf("communication systems, and humanitarian technologies that rely on digital precision.\n");

    return 0;
}


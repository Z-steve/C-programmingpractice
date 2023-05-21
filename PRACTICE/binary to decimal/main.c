#include <stdio.h>

int main() {
    int decimal = 0, binary, base = 1, rem, num;
    printf("Enter the binary number you want to convert in decimal: ");
    scanf("%d", &binary);

    num = binary;
    while (binary != 0) {
        rem = binary % 10;  // to get the last digit of binary number
        decimal = decimal + rem * base;     // base is the weight of the binary digit position (for ex: 2^0, 2^1, etc...)
        binary = binary / 10;   // to get away the last digit of binary number
        base = base * 2;    // so that the next time the weight changes accoring to the binary digit position (2^0 --> 2^1 --> 2^2, etc...)
    }
    printf("Decimal equivalent of the binary number %d is: %d", num, decimal);
    return 0;
}
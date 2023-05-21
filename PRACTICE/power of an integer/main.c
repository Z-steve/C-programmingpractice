#include <stdio.h>

int main() {
    int base, exponent, power = 1, expo;
    double powerd = 1.0;

    printf("Enter the base: ");
    scanf("%d", &base);
    printf("\nEnter the exponent: ");
    scanf("%d", &exponent);

    expo = exponent;
    if (exponent > 0) {     // for positive exponents
        while (exponent != 0) {
            power = power*base;
            exponent--;
        }
        printf("\n%d to the power of %d is %d", base, expo, power);
    } else {                // for negative exponents
        while (exponent != 0) {
            powerd = powerd * (1.0 / base);     
            exponent++;
        }
        printf("\n%d to the power of %d is %.10f", base, expo, powerd);
    }

    return 0;
}
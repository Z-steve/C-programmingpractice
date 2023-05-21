#include <stdio.h>
#include <stdlib.h>

int main() {
    // using increment and decrement operators...
    int x , y, result = 0;

    printf("Please enter the first number: ");
    scanf("%d", &x);
    printf("\nPlease enter the second number: ");
    scanf("%d", &y);

    if (y > 0) {
        while (y != 0) {
        x++;
        y--;
        }
    } else if (y < 0) {
        while (y != 0) {
            x--;
            y++;
        }
    }
    printf("\nThe result is %d", x);


    //...or using half adder logic
    int sum, carry, a, b;
    printf("\n\nPlease enter the first number: ");
    scanf("%d", &a);
    printf("\nPlease enter the second number: ");
    scanf("%d", &b);

    while (b != 0)
    {
        sum = a^b;   // XOR operation
        carry = (a&b)<<1;   // left shift
        a = sum;
        b = carry;
    }
    printf("\nThe result is %d", sum);
    
    return 0;
}
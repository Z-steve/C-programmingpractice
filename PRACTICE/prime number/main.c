#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int x;
    int i, val1, val2, count = 0; 
    printf("Please enter a number (only positive integers): ");
    scanf("%d", &x);

    val1 = ceil(sqrt(x));   // find the square root, ceil function returns a smaller integer greater than or equal to x
    val2 = x;

    for (i = 2; i <= val1; i++) {       // check the divisibility
        if (val2 % i == 0) {
            count = 1;
        }
    }

    // check if it is a prime number or not 
    if ((count == 0 && val2 != 1) || val2 == 2 || val2 == 3) {    // apart from 2 and 3
        printf("%d is a prime number", val2);
    } else {
        printf("%d is not a prime number", val2);
    }


    return 0;
}
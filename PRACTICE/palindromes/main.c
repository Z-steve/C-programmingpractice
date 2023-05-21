#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, result = 0, q, rem;
    printf("Please enter the number: ");
    scanf("%d", &n);

    q = n;

    while (q != 0) {
        rem = q%10;
        result = result * 10 + rem;
        q = q/10;
    }

    if (result == n) {
        printf("\nit's palindrome!\n");
    } else {
        printf("\nit isn't palindrome...\n");
    }
    return 0;
}
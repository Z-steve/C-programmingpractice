#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, i, j;

    printf("How many rows do you want in your pyramid stars?\n");
    scanf("%d", &r);

    for (i = 1; i <= r; i++) {
        for (j = 1; j <= 2*r-1; j++) {
            if (j >= r-(i-1) && j <= r+(i-1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
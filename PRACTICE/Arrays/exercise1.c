#include <stdio.h>

// print array in reverse mode

int main() {
    int a[9] = {34, 56, 54, 32, 67, 89, 90, 32, 21};
    int i;

    for (i = 0; i < 9; i++) {
        printf("%d ", a[i]);
    }
    printf("\n\n");

    printf("Reversing the array...\n\n");

    int x, y, temp;
    for (i = 8; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    return 0;

}
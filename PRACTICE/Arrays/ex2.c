#include <stdio.h>

int main() {
    int a[10], i;

    a[0] = 1;
    a[5] = 2;
    for (i = 0; i < 10; i++) {          // the other not filled positions will have garbage values...
        printf("%d ", a[i]);
    }

    printf("\n\n");
    
    // designated initialization
    int b[10] = {[0] = 1, [5] = 2};     // the not filled positions will now have 0 values

    for (i = 0; i < 10; i++) {
        printf("%d ", b[i]);
    }
}
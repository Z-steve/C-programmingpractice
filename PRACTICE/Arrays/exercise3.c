#include <stdio.h>

int main() {

    int a[50];
    int i;
    int sizeofArray = (sizeof(a) / sizeof(a[0]));
    for (i = 0; i < sizeofArray; i++) {
        printf("%d ", a[i]);                // 50 casual values will be printed....
    }
    printf("\n\nThe size of the array is: %d", sizeofArray);
    return 0;
}
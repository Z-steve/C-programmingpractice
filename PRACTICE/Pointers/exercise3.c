#include <stdio.h>

int main() {
    // sum of elements of the array
    int a[] = {11, 22, 36, 5, 2};
    int sum = 0, *p;

    for (p = &a[0]; p <= &a[4]; p++) {      // arithmetic of pointers
        sum += *p;
    }

    printf("Sum is %d", sum);



    // or... using array names as pointers!
    printf("\n\n");
    sum = 0;
    for (p = a; p <= a + 4; p++) {          // arithmetic of pointers, a = &a[0] 
        sum += *p;
    }

    printf("Sum is %d", sum);

}
#include <stdio.h>
#define N 5

int main() {

    // print elements of array in reverse...
    
    int a[N], *p; 
    printf("Enter %d elements in the array: ", N);
    for (p = a; p <= a+N-1; p++) {
        scanf("%d", p);         // p = &a[p]
    }

    printf("Elements in reverse order: \n");
    for (p = a+N-1; p >= a; p--) {
        printf("%d ", *p);      // *p = *(&a[p])
    }


    return 0;
}
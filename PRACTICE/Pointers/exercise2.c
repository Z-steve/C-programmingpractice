#include <stdio.h>


int * findMid(int arr[], int len) {
    return &arr[len/2];     // returning pointer (address)
}


int main() {
    // print the mid element of the array
    int a[] = {1, 2, 3, 4, 5};
    int len = sizeof(a)/sizeof(a[0]);
    int *mid = findMid(a, len);
    printf("The mid element of the array is: %d", *mid);
    return 0;
}
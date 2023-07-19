#include <stdio.h>


void minMax(int arr[], int len, int *min, int *max) {
    *min = *max = arr[0];
    int i; 
    for (i = 1; i < len; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}


int main() {

    // minimum and maximum element in array
    int a[] = {23, 4, 21, 98, 987, 45, 32, 10, 123, 986, 50, 3, 4, 5};
    int min, max;
    int len = (sizeof(a)/sizeof(a[0]));
    minMax(a, len, &min, &max);         // passing the min and max by reference, so that they can effectively be modified 
    printf("The minimum value in the array is: %d and the maximum value is: %d", min, max);
    return 0;
}
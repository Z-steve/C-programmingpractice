#include <stdio.h>
int fun(int *, int *);

int main() {
    int x = 10, y = 20;
    fun(&x, &y);        // call by reference (address of x and y)
    printf("x = %d, y = %d", x, y);
    return 0;
}

int fun(int *a, int *b) {
    *a = 20;            // swapping values
    *b = 10;    
}
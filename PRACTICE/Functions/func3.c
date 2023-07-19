#include <stdio.h>
int add (int, int);     //function prototype 

int main() {

    int m = 20, n = 30, sum;
    sum = add(m, n);  // actual parameters
    printf("sum of %d + %d is: %d", m, n, sum);
    return 0;
}

int add(int a, int b) {     // formal parameters
    return (a + b);
}
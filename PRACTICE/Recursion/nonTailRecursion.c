#include <stdio.h>
void fun(int n);

void fun(int n) {
    if (n == 0) {
        return;
    }
    fun(n-1);           // non-tail recursion
    printf("%d ", n);      // it will be evalueted after the return of each call
}

int main() {

    fun(3);
    return 0;
}
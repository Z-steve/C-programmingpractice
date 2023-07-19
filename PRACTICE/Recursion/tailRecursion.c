#include <stdio.h>
void fun(int);

void fun(int n) {
    if (n == 0) {
        return;
    } else {
        printf("%d ", n);
    }
    return fun(n-1);  // tail recursion (last thing done by the function, no need to keep record of the previous state)
}

int main() {

    fun(3);
    return 0;
}
#include <stdio.h>
void odd();
void even();
int n = 1;

void odd() {
    if (n <= 10) {
        printf("%d ", n+1);
        n++;
        even();                 // calling even
    }
    return;
}

void even() {
    if (n <= 10) {
        printf("%d ", n-1);
        n++;
        odd();                  // calling odd
    }
    return;
}

int main() {
    odd();                      // the functions odd() and even() will call each other continously... till n = 11
    return 0;
}
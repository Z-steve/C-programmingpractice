#include <stdio.h>
#define ops 4

float sum(float a, float b) {
    return (a + b);
}

float sub(float a, float b) {
    return (a - b);
}

float mult(float a, float b) {
    return (a * b);
}

float div(float a, float b) {
    return (a / b);
}

int main() {
    float (*ptr2func[ops])(float, float) = {sum, sub, mult, div};       // ptr2func[ops] is an array of pointers (the pointers to the functions), we are passing sum, sub, mult, div which indicates the address of the function itself 
    int choice;
    float a, b;
    printf("Enter your choice: 0 for sum, 1, for sub, 2 for mult, 3 for div: \n");
    scanf("%d", &choice);
    printf("Enter the 2 numbers: \n");
    scanf("%f %f", &a, &b);
    printf("%f", ptr2func[choice](a, b));                               // so we use function pointers instead of writing all possible choices in the switch statement
    return 0;
}
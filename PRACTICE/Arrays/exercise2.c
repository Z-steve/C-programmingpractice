#include <stdio.h>

int main() {
    int seen[10] = {0};         // using an array of 10 because numbers goes from 1 to 9 (if the number is in the sequence than it will be 1, if it is not in the sequence the corrisponing position will be 0)
    int num, rem;
    printf("Enter the series of numbers: ");
    scanf("%d", &num);

    while (num > 0) {
        rem = num%10;       // to take the first digit (starting from the right of the number)
        if (seen[rem] == 1) {       // if it is already 1, it means it was already found in the number given by user
            break;     // go out of while
        }
        seen[rem] = 1;
        num = num/10;       // to go to the next digit
    }

    if (num > 0) {
        printf("Yes, some digits appears more than once!");
    } else {
        printf("There isn't repetition of numbers...");
    }


    return 0;
}
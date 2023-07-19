#include <stdio.h>

int input (char str[], int n) {
    int ch, i = 0;      // int ch because it will contain ASCII code using the getchar() function in the next line (i can also use char ch)
    while ((ch == getchar()) != '\n') {         // using getchar() function (it returns an integer equivalent to the ASCII code of the character entered by the user)
        if (i < n) {
            str[i++] = ch;      // using the post-increment operator so that the i will increment on every loop (after assign)
        }
    }
    str[i] = '\0';      // null characther (the final character of a string)
    return i;
}


int main() {
    char str[100];
    int n = input(str, 5);      // accepting maximum of 5 chars
    printf("%d %s", n, str);    // printing the string length and the string itself
    return 0;
}
#include <stdio.h>

int main() {
    int ch;                                 // an ASCII code 
    for (ch = 'A'; ch <= 'Z'; ch++) {
        printf("%c ", ch);                  // or use putchar() function to print characters
    }

    // testing
    printf("\n");
    char str[] = "Hello";
    puts(str);                  // puts() function wants a pointer to the string (str is like a pointer the the first char of "Hello", so to "H" character)
    printf("%s", str);
    return 0;
}
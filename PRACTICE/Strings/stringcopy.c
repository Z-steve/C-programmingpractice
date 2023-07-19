#include <stdio.h>
#include <string.h>

int main() {

    char str1[10] = "Hello";
    char str2[10];
    char str3[10];

    // strcpy() function
    printf("%s\n", strcpy(str2, str1));     // copying str1 in str2 (strcpy() function returns the pointer to the first char of the string which is copied in the destination)
    printf("%s", str2);
    printf("\n");
    strcpy(str3, strcpy(str2, str1));       // strcpy() will pass the pointer of str2 to strcpy() function and copying str2 in str3
    printf("%s", str3);

    printf("\n\n");

    // strncpy() function
    char str4[6] = "Hello";
    char str5[4];
    strncpy(str5, str4, sizeof(str4));      // only a part of the string str4 will be copied in str5 (according to the free size of str5)
    printf("%s", str5);
    printf("\n\n");

    char str6[6];
    strncpy(str6, str4, sizeof(str4));
    str6[sizeof(str6) - 1] = '\0';          // adding null char, since strncpy() function does not add it at the end
    printf("%s", str6);
    return 0;
}
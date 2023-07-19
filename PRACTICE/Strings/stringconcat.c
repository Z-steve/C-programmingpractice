#include <stdio.h>
#include <string.h>

int main() {

    // strcat() function
    char str1[100], str2[100];
    strcpy(str1, "Welcome to ");
    strcpy(str2, "New York!\n");
    strcat(str1, str2);                 // str2 will be appended to str1
    printf("%s", str1);

    printf("\n\n");

    // strncat() function
    char s[5], s2[100];
    strcpy(s, "He");
    strcpy(s2, "llo!");
    strncat(s, s2, sizeof(s) - strlen(s2) - 1);  // 5(sizeofarray) - 2(sizeofstring) - 1(for the null char) = 2 (only 2 chars will be appended to string s) --> OUTPUT: Hell
    printf("%s", s);
    return 0;
}
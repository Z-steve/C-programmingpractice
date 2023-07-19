#include <stdio.h>
#include <string.h>

int main() {

    // strlen() function
    char *str = "Hello World";          // str is a char pointer (it will point to "H")
    char s[] = "Hello Wolld";
    printf("%s\n", str);
    printf("The length of the string is: %d\n", strlen(str));       
    printf("%s\n", s);
    printf("The length of the string is: %d\n", strlen(s));

    printf("\n");
    char str2[100] = "Hello World";     
    printf("%d\n", strlen(str2));           // strlen() function will calculate the length of the string and not of the array (100)
    return 0;


}
#include <stdio.h>
#pragma pack(1)     // it is a special purpose directive used to turn on or off certain features

// STRUCTURE PACKING is used for NOT wasting memory
// if we don't want to waste CPU cycles, we should use STRUCT PADDING

struct abc {
    char a;
    int b;
    char c;
} var;

int main() {
    printf("%d", sizeof(var));      // output will be 6 (structure padding will be ignored) because of STRUCTURE PACKING! (#pragma pack(1))
    return 0;
}
#include <stdio.h>

// supposing 32 bits architecture

struct abc {
    char a;         // 1 byte
    char b;         // 1 byte
    int c;          // 4 byte
};

struct test{
    char a;         // 1 byte
    int b;          // 4 byte
    char c;         // 1 byte
};

int main() {

    struct abc var;
    printf("%d", sizeof(var));      // output: 8 (not 1+1+4 = 6), that's because of structure padding (instead of wasting cpu cycles, there are some empty spaces)
                                    // in this example we have: 1byte (for a) - 1byte (for b) - 2 emptybytes - 4bytes (for int c)
    printf("\n");


    // what if we invert the order of variables in the structure? OUTPUT CHANGES!
    struct test t;
    printf("%d", sizeof(t));       // output: 12 --> 1 byte (for a) - 3 emptybytes - 4bytes (for int b) - 1 byte (for c) - 3 empty bytes


    return 0;
}
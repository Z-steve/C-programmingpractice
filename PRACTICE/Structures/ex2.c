#include <stdio.h>

struct Ournode {
    char x, y, z;
};


int main() {
    struct Ournode p = {'1', '0', 'a'+2};       // z will be 'c'
    struct Ournode *q = &p;     // struct pointer to struct p
    printf("%c, %c", *((char*)q+1), *((char*)q+2));    // OUTPUT: 0, c
    return 0;
}
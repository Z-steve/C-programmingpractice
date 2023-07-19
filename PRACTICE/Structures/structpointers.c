#include <stdio.h>

struct abc {
    int x;
    int y;
};


int main() {

    struct abc a = {0, 1};      // x = 0, y = 1
    struct abc *ptr = &a;        // creating a pointer to the structure abc (a)

    printf("%d %d", ptr->x, ptr->y);           // pointer ptr pointing to struct abc (a) variables x and y

    return 0;
}
#include <stdio.h>

struct Point {
    int x, y, z;
};

int main() {
    struct Point p1 = {.y = 0, .z = 1, .x = 2};
    struct Point *ptr = &p1;        // struct pointer to struct p1
    printf("%d %d %d", ptr->x, ptr->y, ptr->z);
    return 0;
}
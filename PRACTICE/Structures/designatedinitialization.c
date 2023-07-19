#include <stdio.h>

struct abc {
    int x; 
    int y; 
    int z;
};

int main() {
    struct abc a = {.y = 20, .x = 10, .z = 30};             // we use . in front of variables because we are not following the order x y z (look at struct abc)
    printf("%d %d %d", a.x, a.y, a.z);
    return 0;
}
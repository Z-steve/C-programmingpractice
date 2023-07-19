#include <stdio.h>
int fun(int, int);

int main() {
    int x = 10, y = 20;
    fun (x, y);
    printf("x = %d, y = %d", x, y);     // VALUE WILL NOT BE MODIFIED
    return 0;
}

int fun(int x, int y) {     // X = 10 AND Y = 20
    x = 20;             
    y = 10;
}                           // AFTER THE FUNCTION EXECUTED, X AND Y DIE!!!
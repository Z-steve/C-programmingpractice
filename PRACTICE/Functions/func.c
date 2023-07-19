#include <stdio.h>
// prototype
int areaOfRect(int, int);


int areaOfRect(int length, int breadth) {
    int area;
    area = length * breadth;
    return area;
}


int main() {
    int l = 10, b = 5;
    int area = areaOfRect(l, b);
    printf("The area is %d", area);

    // reusability
    l = 50, b = 10;
    area = areaOfRect(l, b);
    printf("\nThe area is %d", area);

    return 0;
}
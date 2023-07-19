#include <stdio.h>

typedef struct car {        // this is the old type
    char engine[50];
    char fuel_type[10];
    int fuel_tank_cap;
    int seating_cap;
    float city_mileage;
} car;                      // this is the new type

int main() {
    car c1;         // instead of: struct car c1;
}
#include <stdio.h>

struct {
    char *engine;
} car1, car2;

struct car {
    char engine[50];
    char fuel_type[10];
    int fuel_tank_cap;
    int seating_cap;
    float city_mileage;
} c1;

int main() {
    
    car1.engine = "DDis 190 Engine";
    car2.engine = "1.2 L Kappa Dual VTVT";
    printf("%s\n", car1.engine);
    printf("%s\n", car2.engine);

    // assigning values...
    struct car c2 = {"DDis 190 Engine", "Diesel", 37, 5, 19.74};
    struct car c3 = {"Kappa", "Petrol", 22, 8, 14.5};


    return 0;
}
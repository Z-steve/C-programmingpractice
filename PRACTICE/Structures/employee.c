#include <stdio.h>

struct {
    char *name;
    int age;
    int salary;
} emp1, emp2;

int manager() {
    struct {
        char *name;
        int age;
        int salary;
    } manager;

    manager.age = 27;

    if (manager.age > 30) {
        manager.salary = 65000;
    } else {
        manager.salary = 55000;
    }
    return manager.salary;
}

int main() {
    printf("Enter the salary of the employee1: ");
    scanf("%d", &emp1.salary);
    printf("\nEnter the salary of the employee2: ");
    scanf("%d", &emp2.salary);
    printf("\nEmployee 1 salary is: %d\n", emp1.salary);
    printf("Employee 2 salary is: %d\n", emp2.salary);
    printf("Manager's salary is %d", manager());
    return 0;
}
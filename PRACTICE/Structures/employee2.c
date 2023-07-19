#include <stdio.h>

struct employee {           // now we use a tag for the structure, so that we don't have to redefine it for the manager figure
    char *name;
    int age; 
    int salary;
};


int manager() {
    struct employee manager;        // using struct employee

    manager.age = 27;
    if (manager.age > 30) {
        manager.salary = 65000;
    } else {
        manager.salary = 55000;
    }
    return manager.salary;
}

int main() {
    struct employee emp1;       // using struct employee
    struct employee emp2;
    printf("Enter the salary of the employee1: ");
    scanf("%d", &emp1.salary);
    printf("\nEnter the salary of the employee2: ");
    scanf("%d", &emp2.salary);
    printf("\nEmployee 1 salary is: %d\n", emp1.salary);
    printf("Employee 2 salary is: %d\n", emp2.salary);
    printf("Manager's salary is %d", manager());
    return 0;
}
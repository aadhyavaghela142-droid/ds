#include <stdio.h>

struct emp_details {
    int employee_id;
    char name[20];
    char designation[20];
    int salary;
};

int main() {
    struct emp_details emp;

    printf("enter emp id: ");
    scanf("%d", &emp.employee_id);

    printf("enter name: ");
    scanf("%s", emp.name);

    printf("enter designation: ");
    scanf("%s", emp.designation);

    printf("enter salary: ");
    scanf("%d", &emp.salary);

    printf("\nemp details\n");
    printf("ID: %d\n", emp.employee_id);
    printf("name: %s\n", emp.name);
    printf("designation: %s\n", emp.designation);
    printf("salary: %d\n", emp.salary);

    return 0;
}


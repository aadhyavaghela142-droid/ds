777]#include <stdio.h>

struct emp_detail {
    int emp_id;
    char name[20];
    char designation[20];
    int salary;
};

int main() {
    struct emp_detail emp;
    struct emp_detail *p;

    p = &emp;

    printf("enter emp id: ");
    scanf("%d", &(*p).emp_id);

    printf("enter name: ");
    scanf("%s", (*p).name);

    printf("enter designation: ");
    scanf("%s", (*p).designation);

    printf("enter salary: ");
    scanf("%d", &(*p).salary);

    printf("\nemp details\n");
    printf("id: %d\n", (*p).employee_id);
    printf("name: %s\n", (*p).name);
    printf("designation: %s\n", (*p).designation);
    printf("salary: %d\n", (*p).salary);

    return 0;
}


#include <stdio.h>

struct stud_detail {
    int enrollment_no;
    char name[20];
    int sem;
    float cpi;
};

int main() {
    struct stud_detail s[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("enter details of stud %d", i + 1);

        printf("enrollment No: ");
        scanf("%d", &s[i].enrollment_no);

        printf("name: ");
        scanf("%s", s[i].name);

        printf("semester: ");
        scanf("%d", &s[i].sem);

        printf("CPI: ");
        scanf("%f", &s[i].cpi);
    }

    printf("\nstudent Details\n");
    for (i = 0; i < 5; i++) {
        printf("student %d\n", i + 1);
        printf("enrollment no: %d\n", s[i].enrollment_no);
        printf("name: %s\n", s[i].name);
        printf("semester: %d\n", s[i].sem);
        printf("CPI: %.2f\n", s[i].cpi);
    }

    return 0;
}


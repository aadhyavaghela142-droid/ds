#include <stdio.h>

struct complex {
    int real;
    int imag;
};

struct complex add(struct complex c1, struct complex c2) {
    struct complex c3;
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;
    return c3;
}

int main() {
    struct complex c1, c2, c3;

    printf("enter 1st real number: ");
    scanf("%d", &c1.real);

    printf("enter 1st imaginary number: ");
    scanf("%d", &c1.imag);

    printf("enter 2nd real number: ");
    scanf("%d", &c2.real);z

    printf("enter 2nd imaginary number: ");
    scanf("%d", &c2.imag);

    c3 = add(c1, c2);

    printf("\nsum = %d + %di\n", c3.real, c3.imag);

    return 0;
}


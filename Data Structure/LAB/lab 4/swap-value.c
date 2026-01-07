#include <stdio.h>

void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("Inside function after swapping:\n");
    printf("a = %d, b = %d\n", a, b);
}

int main() {
    int x, y;

    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);

    printf("Before swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    swap(x, y);

    printf("After function call:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}


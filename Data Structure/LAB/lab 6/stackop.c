#include <stdio.h>
#define MAX 5   

int stack[MAX];
int top = -1;

void push() {
    int value;
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push.\n");
    } else {
        printf("Enter value to push: ");
        scanf("%d", &value);
        top++;
        stack[top] = value;
        printf("Value pushed successfully.\n");
    }
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow! Cannot pop.\n");
    } else {
        printf("Popped value: %d\n", stack[top]);
        top--;
    }
}

void peep() {
    int pos;
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Enter position from top: ");
        scanf("%d", &pos);

        if (top - pos + 1 < 0) {
            printf("Invalid position.\n");
        } else {
            printf("Element at position %d is %d\n", pos, stack[top - pos + 1]);
        }
    }
}

void change() {
    int pos, value;
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Enter position from top: ");
        scanf("%d", &pos);

        if (top - pos + 1 < 0) {
            printf("Invalid position.\n");
        } else {
            printf("Enter new value: ");
            scanf("%d", &value);
            stack[top - pos + 1] = value;
            printf("Value changed successfully.\n");
        }
    }
}

void display() {
    int i;
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements are:\n");
        for (i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int choice;

    do {
        printf("\n--- STACK MENU ---\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. PEEP\n");
        printf("4. CHANGE\n");
        printf("5. DISPLAY\n");
        printf("6. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peep(); break;
            case 4: change(); break;
            case 5: display(); break;
            case 6: printf("Exiting program.\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 6);

    return 0;
}

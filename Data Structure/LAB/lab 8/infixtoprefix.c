#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 50

char stack[MAX];
int top = -1;

void push(char ch) {
    stack[++top] = ch;
}

char pop() {
    return stack[top--];
}

int precedence(char ch) {
    if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '^')
        return 3;
    else
        return 0;
}

void reverse(char exp[]) {
    int i, j;
    char temp;
    for (i = 0, j = strlen(exp) - 1; i < j; i++, j--) {
        temp = exp[i];
        exp[i] = exp[j];
        exp[j] = temp;
    }
}

int main() {
    char infix[MAX], prefix[MAX];
    int i, k = 0;
    char ch;

    printf("Enter infix expression: ");
    scanf("%s", infix);
    reverse(infix);

    for (i = 0; infix[i] != '\0'; i++) {
        if (infix[i] == '(')
            infix[i] = ')';
        else if (infix[i] == ')')
            infix[i] = '(';
    }

    for (i = 0; infix[i] != '\0'; i++) {
        ch = infix[i];

        if (isalnum(ch)) {
            prefix[k++] = ch;
        }
        else if (ch == '(') {
            push(ch);
        }
        else if (ch == ')') {
            while (top != -1 && stack[top] != '(') {
                prefix[k++] = pop();
            }
            pop();
        }
        else {
            while (top != -1 && precedence(stack[top]) > precedence(ch)) {
                prefix[k++] = pop();
            }
            push(ch);
        }
    }

    while (top != -1) {
        prefix[k++] = pop();
    }

    prefix[k] = '\0';

    reverse(prefix);

    printf("Prefix expression: %s\n", prefix);

    return 0;
}

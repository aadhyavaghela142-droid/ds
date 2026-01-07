#include<stdio.h>
#include<string.h>

char s[100];
int top=-1;

void push(char x){
    if(top>=99){
        printf("stack overflow");
    }
    top++;
    s[top]=x;
}
int pop(){
    if(top<0){
        printf("stack underflow");
        return -1;
    }
    top--;
}

void main(){
   char s[100];
   int i;
   
   printf("enter string:");
   scanf("%s",s);
   
   for (i = 0; i < strlen(str); i++) {
        push(str[i]);
    }

    for (i = 0; i < strlen(str); i++) {
        str[i] = pop();
    }

    printf("Reversed string: %s\n", str);

    return 0;
}

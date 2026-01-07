#include<stdio.h>
int s[100];
int top=-1;

void push(int x){
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
int peep(int i){
    if(top-i+1<=0){
        printf("stack underflow");
        return -1;
    }
    return s[top-i+1];
}
void change(int i,int x){
    if(top-i+1<=0){
        printf("stack underflow");
        return;
    }
    s[top-i+1] = x;
}
void display(){
    int i;
    if (top < 0) {
        printf("stack underflow");
        return;
    }
    for (i = top; i >= 0; i--) {
        printf("%d", s[i]);
    }
}

void main(){
    push(10);
    push(20);
    push(30);

    printf("pop: %d\n", pop());
    printf("peep: %d\n", peep(1));

    change(1, 100);
    printf("\n");
    display();
}

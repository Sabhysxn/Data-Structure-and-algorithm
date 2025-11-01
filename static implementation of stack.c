#include<stdio.h>
#define size 5
int stack[size];
int top = -1;
void push(int X) {
    if(top == size-1) {
        printf("Stack Overflow");
    }
    else {
        top++;
        stack[top] = X;
    }
}
void display() {
    for(int i=top;i>=0;i--) {
        printf("%d->",stack[i]);
    }
}
void pop() {
    if(top == -1) {
        printf("Stack Underflow");
    }
    else {
    //    int y = stack[top];
       top--;
    }
}
void main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();
    pop();
    pop();
    printf("\nAfter popping\n");
    display();
}

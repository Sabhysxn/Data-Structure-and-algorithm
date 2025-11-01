#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *top = NULL, *newNode;
void push(int X) {
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = X;
    newNode->next = top;
    top = newNode;
}
void pop() {
    if(top == NULL) {
        printf("Stack Underflow");
    }
    else {
        struct node *temp = top;
        top = top->next;
        free(temp);
        temp = NULL;
    }
}
void display() {
    struct node *p = top;
    while(p != NULL) {
        printf("%d->", p->data);
        p = p->next;
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
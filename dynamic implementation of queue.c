#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *front , *rear;
void enqueue(int y) {
    struct node *newNode;
    newNode = (struct node*) malloc (sizeof(struct node));
    newNode->data=y;
    newNode->next=NULL;
    if(front==NULL) {
        front=rear=newNode;
    }
    else {
        rear->next=newNode;
        rear=newNode;
    }
}
void dequeue() {
    struct node *p;
    if(front==NULL) {
        printf("Q is empty");
    }
    else {
        p=front;
        front = front->next;
        free(p);
        p=NULL;
    }
}
void display() {
    struct node *p;
    p=front;
    while(p!=NULL) {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
}
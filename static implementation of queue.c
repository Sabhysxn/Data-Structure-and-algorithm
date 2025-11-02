#include<stdio.h>
#include<stdlib.h>
#define size 5
int queue[size];
int front = -1;
int rear = -1;
void enqueue(int x) {
    if(rear == size - 1) {
        printf("Queue overflow");
    }
    else {
        rear = rear + 1;
        queue[rear] =  x;
        if(front == -1) {
            front = 0;
        }
    }
}
void dequeue() {
    if(front==-1 && rear==-1) {
        printf("Q is empty");
    }
    else if (front == rear) {
        printf("%d",queue[front]);
        front = -1;
        rear = -1;
    }
    else {
        printf("Deleted :- %d\n",queue[front]);
        front = front + 1;
    }
}
void display() {
    if(front == -1 && rear == -1) {
        printf("No element");
    }
    else {
        for(int i=front;i<=rear;i++) {
            printf("%d ",queue[i]);
        }
       printf("\n"); 
    }
}
void main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
}
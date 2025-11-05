#include<stdio.h>
#include<stdlib.h>
#define size 6
int queue[size];
int front = -1;
int rear = -1;
void enqueue(int x) {
    if(((rear+1) % size)==front) {
        printf("CQ is full");
    }
    else if(front==-1 && rear==-1) {
      front=rear=0;
      queue[rear]=x;
    }
    else {
        rear=(rear+1)%size;
        queue[rear]=x;
    }
}
void dequeue() {
    if(front==-1 && rear==-1) {
        printf("CQ is empty");
    }
    else if(front==rear) {
        front=rear=-1;
    }
    else {
        printf("Deleted:- %d\n",queue[front]);
        front=(front+1) % size;
    } 
}
void display() {
    int i=front;
    while(i!=rear) {
        printf("%d ",queue[i]);
        i=(i+1) % size;
    }
    printf("%d ",queue[i]);
    printf("\n");
}
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    dequeue();
    dequeue();
    display();
    enqueue(90);
    display();
}

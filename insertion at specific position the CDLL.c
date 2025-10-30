#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head, *temp, *newNode;
int choice,value;
int main() {
    do {
        newNode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data:-");
        scanf("%d",&newNode->data);
        newNode->next=NULL;
        newNode->prev=NULL;
        if(head==NULL) {
            head=newNode;
            temp=newNode;
            head->next=head;
            head->prev=head;
        }
        else {
            newNode->prev=temp;
            temp->next=newNode;
            newNode->next=head;
            head->prev=newNode;
            temp=temp->next;
        }
        printf("if you want to add the node the press 1 otherwise 0");
        scanf("%d",&choice);
    }
    while(choice==1); 
    struct node *p;
    p=head;
    while(p->next!=head) {
        printf("%d->",p->data);
        p=p->next;
    }
    printf("%d",p->data);
    printf("\n");
    
    printf("Enter the value which you want after the node");
    scanf("%d",&value);
    newNode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the new node data:-");
    scanf("%d",&newNode->data);
    newNode->next=NULL;
    newNode->prev=NULL;
    while(p->data!=value) {
        p=p->next;
    }
    newNode->next=p->next;
    newNode->prev=p;
    p->next=newNode;
    newNode->next->prev=newNode;
    
    
    p=head;
    while(p->next!=head) {
        printf("%d->",p->data);
        p=p->next;
    }
    printf("%d",p->data);
}
#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
    struct node *prev;
};
int choice;
struct node *head=NULL,*temp,*newNode;
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
            newNode->next=temp;
            temp->next=newNode;
            newNode->next=head;
            head->prev=newNode;
            temp=temp->next;
        }
        printf("if you wnat to add the node then press 1 otherwise 0:-");
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
}

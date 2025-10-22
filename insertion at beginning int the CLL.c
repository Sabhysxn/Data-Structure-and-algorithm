#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *newNode, *temp, *head=NULL;
int choice;
int main() {
    do {
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the first node data");
        scanf("%d",&newNode->data);
        newNode->next=NULL;
        if(head==NULL) {
            head=newNode;
            temp=newNode;
            temp->next=head;
        }
        else {
            temp->next=newNode;
            temp=temp->next;
        }
        temp->next=head;
        printf("Do u want to add the node then press 1 otherwise 0");
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
    
    
    newNode= (struct node*)malloc(sizeof(struct node));
    printf("Enter the data which you want to add");
    scanf("%d",&newNode->data);
    while(p->next!=head)  {
        p=p->next;
    }
    p->next=newNode;
    newNode->next=head;
    head=newNode;
    printf("\n");
    printf("The final linked list:-");
    p=head;
    while(p->next!=head) {
        printf("%d->",p->data);
        p=p->next;
    }
    printf("%d",p->data);
}
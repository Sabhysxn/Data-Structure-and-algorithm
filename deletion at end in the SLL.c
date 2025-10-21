#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head=NULL, *temp, *newNode;
int choice;
int main() {
    do {
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the  first node data:-");
        scanf("%d",&newNode->data);
        newNode->next=NULL;
        if(head==NULL) {
            head=newNode;
            temp=newNode;
        }
        else {
            temp->next=newNode;
            temp=temp->next;
        }
        printf("Do u want to add the node then press 1 otherwise 0");
        scanf("%d",&choice);
    }
    while(choice==1);
    struct node *p, *q;
    p=head;
    while(p!=NULL) {
        printf("%d",p->data);
        p=p->next;
    }
    printf("\n");
    p=head;
    while(p->next!=NULL) {
        q=p;
        p=p->next;
    }
    q->next = p->next;
    free(p);
    p=NULL;
    p=head;
    printf("The final linked list is:- ");
    while(p!=NULL) {
        printf("%d",p->data);
        p=p->next;
    }
    printf("\n");
    
}
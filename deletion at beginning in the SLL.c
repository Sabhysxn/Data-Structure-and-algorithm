#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *newNode, *head=NULL, *temp;
int choice;
int main() {
    do {
        newNode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the node:-");
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
        printf("Do u want to add the node then u press 1 otherwise 0");
        scanf("%d",&choice);
    }
    while(choice==1);
    struct node *p;
    p=head;
    while(p!=NULL) {
        printf("%d",p->data);
        p=p->next;
    }
    printf("\n");
    p=head;
    if(p!=NULL) {
        head=p->next;
        free(p);
        p=NULL;
    }
    p=head;
    printf("List after deleting first node:-");
    while(p!=NULL) {
        printf("%d",p->data);
        p=p->next;
    }
    printf("\n");
    return 0;
}
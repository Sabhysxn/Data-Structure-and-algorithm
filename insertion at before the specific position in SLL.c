#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *temp,*head=NULL, *newNode;
int choice,value;
int main() {
    do {
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the first node data:-");
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
        printf("Do u want to add the  node the u press 1 otherwise 0");
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
    printf("Enter the position which want to add the node before the specfic position");
    scanf("%d",&value);
    if(head->data == value) {
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter new node data: ");
        scanf("%d",&newNode->data);
        newNode->next = head;
        head = newNode;
    }
    else {
        q=NULL;
        p=head;
        while(p!=NULL && p->data!=value) {
            q=p;
            p=p->next;
        }
        if(p==NULL) {
            printf("Value %d not found in list!\n",value);
        } else {
            newNode = (struct node*)malloc(sizeof(struct node));
            printf("Enter new node data: ");
            scanf("%d",&newNode->data);
            newNode->next = p;
            q->next = newNode;
        }
    }
    p=head;
    while(p!=NULL) {
        printf("%d",p->data);
        p=p->next;
    }
}
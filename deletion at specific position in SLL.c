#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head=NULL, *temp, *newNode;
void deletion_at_specific() {
    int val;
    struct node *p, *q, *temp;
    if(head == NULL) {
        printf("List is empty\n");
        return;
    }
    else if(head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }
    p=head;
    printf("Enter the position to delete the node: ");
    scanf("%d",&val);
    while(p->data!=val && p->next!=NULL) {
        q=p;
        p=p->next;
    }
    q->next = p->next;
    free(p);
    p=NULL;
    p=head;
    printf("Updated list after deletion:\n");
    while(p!=NULL) {
        printf("%d ",p->data);
        p=p->next;
    }
}
int main() {
    int choice;
    do {
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d",&newNode->data);
        newNode->next=NULL;
        if(head==NULL) {
            head = temp = newNode;
        }
        else {
            temp->next = newNode;
            temp= temp->next;
        }
        printf("Do you want to add another Node? Press 1 for Yes, 0 for No: ");
        scanf("%d",&choice);
    }
    while(choice==1);
    struct node *p;
    p=head;
    printf("The linked list is:\n");
    while(p!=NULL) {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
    deletion_at_specific();
    return 0;
}
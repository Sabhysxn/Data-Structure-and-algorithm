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
        printf("Enter the data");
        scanf("%d",&newNode->data);
        newNode->next=NULL;
        if(head==NULL) {
            head = temp = newNode;
        }
        else {
            temp->next = newNode;
            temp= temp->next;
        }
        printf("Do you want to add the Node then you press 1 otherwise 0 ");
        scanf("%d",&choice);
    }
    while(choice==1);
    struct node *p;
    p=head;
    while(p!=NULL) {
        printf("%d",p->data);
        p=p->next;
    }
}

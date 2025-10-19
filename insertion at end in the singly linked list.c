#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *newNode, *temp, *head=NULL;
int choice;
int main() {
    do{
        int value;
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data");
        scanf("%d",&newNode->data); 
        newNode->next=NULL;
        if(head==NULL) {
            head=newNode;
        }
        else {
            temp = head;
            while(temp->next!=NULL) {
                temp = temp -> next;
            }
            temp->next=newNode;
        }
        printf("Do u want to add data then press 1 otherwise press 0");
        scanf("%d",&choice);
    }
    while(choice==1);
    struct node *p;
    p = head;
    while(p!=NULL) {
        printf("%d",p->data);
        p=p->next;
    }
}
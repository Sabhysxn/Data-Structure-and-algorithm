#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head = NULL, *temp, *newNode;
void insertion_before_specific() {
    newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data to insert: ");
    scanf("%d", &newNode->data);
    if(head==NULL) {
        head=newNode;
        newNode->next=head;
        return;
    }
    else {
        int val;
        printf("Enter the position before which to insert: ");
        scanf("%d", &val);
        struct node *p = head, *q = NULL;
        if(head->data==val) {
            struct node *last = head;
            while(last->next != head) {
                last = last->next;
            }
            newNode->next = head;
            last->next = newNode;
            head = newNode;
        }
        else {
            while(p->data != val && p->next != head) {
                q = p;
                p = p->next;
            }
            q->next = newNode;
            newNode->next = p;
        }
        p=head;
        printf("Updated list after insertion:\n");
        while(p->next != head) {
            printf("%d ", p->data);
            p = p->next;
        }
        printf("%d\n", p->data);
    }
}
int main() {
    int choice;
    do {
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d", &newNode->data);
        if (head == NULL) {
            head = temp = newNode;
        } 
        else {
            temp->next = newNode;
            temp = temp->next;
        }
        temp->next = head;
        printf("Do you want to add another Node? Press 1 for Yes, 0 for No: ");
        scanf("%d", &choice);
    } while (choice == 1);
    
    struct node *p;
    p = head;
    printf("The circular linked list is:\n");
    while(p->next != head) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("%d\n", p->data);
    insertion_before_specific();
    return 0;
}
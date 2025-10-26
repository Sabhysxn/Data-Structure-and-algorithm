#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL, *temp, *newNode;
void insertion_at_specific() {
    int val;
    newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data to insert: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    newNode->prev = NULL;
    struct node *p = head;
    printf("Enter the position after which to insert: ");
    scanf("%d", &val);
    while(p != NULL && p->data != val) {
        p = p->next;
    }
    newNode->next = p->next;
    newNode->prev = p;
    p->next= newNode;
    newNode->next->prev = newNode;
    p = head;
    printf("Updated doubly linked list after insertion at specific position:\n");
    while(p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
}
int main() {
    int choice;
    do {
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        newNode->prev = NULL;
        if (head == NULL) {
            head = temp = newNode;
        } 
        else {
            temp->next = newNode;
            newNode->prev = temp;
            temp = temp->next;
        }
        printf("Do you want to add more nodes? (1 for Yes / 0 for No): ");
        scanf("%d", &choice);
    } 
    while (choice == 1);
    struct node *p = head;
    printf("The doubly linked list is:\n");
    while(p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
    insertion_at_specific();
    return 0;
}
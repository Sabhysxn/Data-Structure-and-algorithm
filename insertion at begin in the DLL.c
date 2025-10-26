#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL, *temp, *newNode;
void insertion_at_begin() {
    int data;
    newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data to insert at beginning: ");
    scanf("%d", &data);
    newNode->prev = NULL;
    newNode->data = data;
    newNode->next = NULL;
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    printf("Updated doubly linked list after insertion at beginning:\n");
    struct node *p = head;
    while(p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
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
    insertion_at_begin();
    return 0;
}
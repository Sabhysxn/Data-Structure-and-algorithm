#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head = NULL, *temp, *newNode;
void insertion_after_specific() {
    newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data to insert: ");
    scanf("%d", &newNode->data);
    if (head == NULL) {
        head = newNode;
        head->next = head;
    } else {
        int pos;
        printf("Enter the position after which to insert: ");
        scanf("%d", &pos);
        temp = head;
        while (temp->data != pos) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    temp = head;
    printf("Updated list after insertion:\n");
    while(temp->next != head) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d\n", temp->data); 
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
    do {
        printf("%d ", p->data);
        p = p->next;
    } while (p != head);
    printf("\n");

    insertion_after_specific();
    return 0;
}
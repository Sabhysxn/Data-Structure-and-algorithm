# include <stdio.h>
# include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head = NULL, *temp, *newNode;
void deletion_at_begin() {
    if(head == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }
    else if(head==head->next) {
        free(head);
        head = NULL;
    }
    else {
        struct node *p = head;
        temp = head;
        while(p->next != head) {
            p = p->next;
        }
        p->next = temp->next;
        head = temp->next;
        free(temp);
    }
    struct node *q = head;
    printf("Updated list after deletion:\n");
    while(q->next != head) {
        printf("%d ", q->data);
        q = q->next;
    }
    printf("%d\n", q->data);
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
        printf("Do you want to add more nodes? (1 for Yes / 0 for No): ");
        scanf("%d", &choice);
    } 
    while (choice == 1);
    struct node *p = head;
    printf("The circular linked list is:\n");
    while(p->next != head) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("%d\n", p->data);
    deletion_at_begin();
    return 0;
 }
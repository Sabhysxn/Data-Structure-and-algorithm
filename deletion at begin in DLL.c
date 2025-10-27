# include <stdio.h>
# include <stdlib.h>
struct node {
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL, *temp, *newNode;
void deletion_at_begin() {
    if(head == NULL) {
        printf("The list is empty, nothing to delete.\n");
        return;
    }
    else if(head->next == NULL) {
        free(head);
        head = NULL;
    }
    else {
        struct node *t = head;
        head = head->next;
        head->prev = NULL;
        free(t);
        t = NULL;
    }
    struct node *p = head;
    printf("Updated doubly linked list after deletion at beginning:\n");
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
    deletion_at_begin();
    return 0;
}
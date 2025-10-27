# include <stdio.h>
# include <stdlib.h>
struct node {
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL, *temp, *newNode;
void deletion_at_end() {
    if(head == NULL) {
        printf("The list is empty, nothing to delete.\n");
        return;
    }
    else if(head->next == NULL) {
        free(head);
        head = NULL;
    }
    else {
        struct node *p = head;
        while(p->next != NULL) {
            p = p->next;
        }
        p->prev->next = NULL;
        free(p);
        p = NULL;
    }
    struct node *p = head;
    printf("Updated doubly linked list after deletion at end:\n");
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
        printf("Enter the data:- ");
        scanf("%d",&newNode->data);
        newNode->prev=NULL;
        newNode->next=NULL;
        if(head==NULL) {
            temp=head=newNode;
        }
        else {
            temp->next=newNode;
            newNode->prev=temp;
            temp=temp->next;
        }
        printf("Want to insert node then press 1 otherwise 0");
        scanf("%d",&choice);
    }
    while (choice == 1);
    struct node *p = head;
    printf("The doubly linked list is:\n");
    while(p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
    deletion_at_end();
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct node { 
    int data; 
    struct node *next; 
};
struct node *head = NULL, *temp, *newnode;
int main() {
    int choice, key;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter first node data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    head = newnode;

    do {
        printf("\nEnter the value after which you want to insert: ");
        scanf("%d", &key);

        temp = head;
        while (temp && temp->data != key)
            temp = temp->next;

        if (temp==NULL) {
            printf("Value %d not found!\n", key);
        } 
        else {
            newnode = (struct node*)malloc(sizeof(struct node));
            printf("Enter data to insert: ");
            scanf("%d", &newnode->data);
            newnode->next = temp->next;
            temp->next = newnode;
        }
        printf("Press 1 to insert again, 0 to stop: ");
        scanf("%d", &choice);
    } 
    while (choice == 1);
    struct node *p;
    p=head;
    while(p!=NULL) {
        printf("%d",p->data);
        p=p->next;
    }
}

# include <stdio.h>
# include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head = NULL, *temp, *newNode;
void deletion_at_specific() {
    if(head == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }
    else if(head==head->next) {
        free(head);
        head = NULL;
    }
    else {
        int val;
        printf("Enter the value to delete: ");
        scanf("%d", &val);
        struct node *p = head, *q = head;
        while(p->data != val && p->next != head) {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        free(p);
        p = head;
        printf("Updated list after deletion:\n");
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
    deletion_at_specific();
    return 0;
}
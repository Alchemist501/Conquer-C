#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

void display(struct node *node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void insert_n(struct node **head) {
    struct node *newnode = (struct node*) malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory insufficient\n");
        return;
    }

    int data, pos, i = 1;
    
    printf("Enter the element to be inserted: ");
    scanf("%d", &data);
    printf("Enter the position: ");
    scanf("%d", &pos);

    newnode->data = data;
    newnode->next = NULL;

    if (pos <= 0) {
        printf("Invalid position\n");
        free(newnode);
        return;
    }

    if (pos == 1) {
        // Insert at the beginning
        newnode->next = *head;
        *head = newnode;
        return;
    }

    struct node* ptr = *head;

    while (ptr != NULL && i < pos - 1) {
        ptr = ptr->next;
        i++;
    }

    if (ptr == NULL) {
        printf("Position out of bounds\n");
        free(newnode);
        return;
    }

    // Insert at the nth position
    newnode->next = ptr->next;
    ptr->next = newnode;
}

int main() {
    struct node *head = NULL;

    // Call insert_n function multiple times to insert nodes at different positions
    insert_n(&head);
    insert_n(&head);
    insert_n(&head);

    printf("Linked List after insertion(s): ");
    display(head);

    return 0;
}

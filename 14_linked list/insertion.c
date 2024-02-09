#include<stdio.h>
#include<stdlib.h>
int data,item,pos,i,count;
struct node{
    int data;
    struct node* next;
};
//to find the number of nodes
void num(struct node **head){
    if (*head!=NULL){
        struct node* ptr= *head;
        count=1;
        while (ptr->next!=NULL){
            count++;
            ptr=ptr->next;
        }
    }
    else{
        printf("List is empty\n");
        count=0;
    }
}
//insertion at end
void insertion(struct node **head,int data){
    struct node *newnode = (struct node*) malloc (sizeof(struct node));
    if (newnode == NULL){
        printf("Memory insufficient\n");
        return ;
    }else{
        if (*head == NULL)
            *head = newnode;
        struct node* ptr= *head;
        while (ptr->next != NULL)
            ptr=ptr->next;
        newnode->data = data;
        ptr->next = newnode;
        newnode->next = NULL;
    }
}
//insertion after a node
void insert(struct node **head){
    struct node *newnode = (struct node*) malloc (sizeof(struct node));
    if (newnode == NULL){
        printf("Memory insufficient\n");
        return ;
    }else{
        if (*head == NULL){
            printf("List is empty\nS");
            free(newnode);
        }
        else{
            printf("Enter the element to be inserted: ");
            scanf("%d",&data);
            printf("ENter the data in previous node: ");
            scanf("%d",&item);
            newnode->data = data;
            struct node* ptr= *head;
            while (ptr->data!=item && ptr->next != NULL)
                ptr=ptr->next;
            if(ptr->data!=item && ptr->next==NULL){
                printf("Item not available\n");
                free(newnode);
                return;
            }
            newnode->next = ptr->next;
            ptr->next = newnode;
        }
    }
}
//insert before a node
void insert_b(struct node **head) {
    struct node *newnode = (struct node*) malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory insufficient\n");
        return;
    } else {
        if (*head == NULL) {
            // If the list is empty, insert at the beginning
            printf("List is empty\n");
            free(newnode);
        } else {
            printf("Enter the element to be inserted: ");
            scanf("%d",&data);
            printf("Enter the data of node before which the element is to be inserted : ");
            scanf("%d",&item);
            newnode->data = data;
            struct node* ptr = *head;
            if (ptr->data == item) {
                // If the item is found at the beginning, insert before it
                newnode->next = ptr;
                *head = newnode;
            } else {
                while (ptr->next != NULL && ptr->next->data != item)
                    ptr = ptr->next;
                if (ptr->next == NULL) {
                    printf("Item not available\n");
                    free(newnode);  // Free allocated memory
                    return;
                }
                newnode->next = ptr->next;
                ptr->next = newnode;
            }
        }
    }
}
//insertion at nth position
void insert_n(struct node **head) {
    struct node *newnode = (struct node*) malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory insufficient\n");
        return;
    }
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
    i=1;
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
//delete data
void delete_data(struct node**head){
    struct node* temp = *head;
    struct node* prev = NULL;
    if (temp == NULL) {
        printf("List is empty\n");
    } else {
        printf("Enter the data : ");
        scanf("%d",&item);
        while (temp != NULL && temp->data != item) {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL) {
            printf("Item not in list\n");
            return;
        }
        if (prev == NULL) {
            *head = temp->next;
        } else {
            prev->next = temp->next;
        }
        printf("Deleted element: %d\n", temp->data);
        free(temp);
    }
}
//display the list 
void display(struct node **head){
    if (*head == NULL)
        printf("list is empty\n");
    else{
    printf("Entered elements are : ");
    struct node* ptr = *head;
    while (ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
    }
}
int main(){
    struct node *head =NULL;    
    int data,item,a=1,choice;
    printf("Enter 1 to enter\n2 to enter an element after one node\n3 to enter an element before one node\n4 to enter an element at a position\n5 to display\n6 to stop\n");
    while (a==1){
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice){
        case 1: {
            printf("Enter the data : ");
            scanf("%d",&data);
            insertion(&head,data);
        }
            break;
        case 2:
            insert(&head);
            break;
        case 3:{
            insert_b(&head);
            break;
        }
        case 4: insert_n(&head);
            break;
        case 5: delete_data(&head);
                break;
        case 6: display(&head);
                break;
        case 7:
            a=2;
            break;
        default:
            printf("Invalid number \n");
            break;
        }
    }
    return 0;
}
//smallest element
#include <stdio.h>
#include <stdlib.h>
int min,flag=0;
struct node {
    int data;
    struct node* next;
};

struct node* create_node(int data) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

void insertE(struct node** head, int data) {
    struct node* newnode = create_node(data);
    if (newnode == NULL) {
        printf("Memory allocation failed\n");
    } else {
        if (*head == NULL) {
            *head = newnode;
            return;
        }
        struct node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newnode;
    }
}

void printlist(struct node* head) {
    if(head==NULL){
        printf("Empty list\n");
        flag=1;
    }
    else{
        printf("Linked list: ");
        while (head != NULL) {
            printf("%d ", head->data);
            head = head->next;
        }
        printf("\n");
    }
}
void get_min(struct node** head) {
    struct node* temp = *head;
    if (temp == NULL) {
        printf("Empty list\n");
        return;
    }

    int min = temp->data;

    while (temp != NULL) {
        if (temp->data < min) {
            min = temp->data;
        }
        temp = temp->next;
    }

    delete(head, min);
}

void delete(struct node** head, int item) {
    struct node* temp = *head;
    struct node* prev = NULL;
        while (temp != NULL && temp->data != item) {
            prev = temp;
            temp = temp->next;
        }
        if (prev == NULL) {
            *head = temp->next;
        } else {
            prev->next = temp->next;
        }
        printf("Deleted element: %d\n", temp->data);
        free(temp);  
}

int main() {
    struct node* head = NULL;
    insertE(&head, 1);
    insertE(&head, 7);
    insertE(&head, 3);
    printlist(head);
   // delete(&head, 4);
   if(flag==0){
    get_min(&head);
    printlist(head);
   }
    return 0;
}
//reverse a list 
#include <stdio.h>
#include <stdlib.h>
int c,count=1;
struct node {
    int data;
    struct node* next;
};
struct node* create_node(int data) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}
void insertE(struct node** head, int data) {
    struct node* newnode = create_node(data);
    if (newnode == NULL) {
        printf("Memory allocation failed\n");
    }
    else{
        count++;
        if (*head == NULL) {
            *head = newnode;
            return;
        }
        struct node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newnode;
    }
}
void printlist(struct node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
void reverse(struct node** head){
    struct node* prev = NULL;
    struct node* current = *head;
    struct node* next;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}
int main() {
    struct node* head = NULL;
    insertE(&head, 1);
    insertE(&head, 2);
    insertE(&head, 3);
    printf("Linked list: ");
    printlist(head);
    reverse(&head);
    printf("Linked list: ");
    printlist(head);
    return 0;
}
//search element 
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
};
struct node* create_node(int data) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}
void insertE(struct node** head, int data) {
    struct node* newnode = create_node(data);
    if (newnode == NULL) {
        printf("Memory allocation failed\n");
    }
    else{
        if (*head == NULL) {
            *head = newnode;
            return;
        }
        struct node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newnode;
    }
}
void printlist(struct node* head) {
    printf("Linked list: ");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
void Search(struct node** head, int item){
    struct node* temp = *head;
    if (temp == NULL) {
        printf("List is empty\n");
        return;
    }
    int count=1;
    while (temp != NULL && temp->data != item) {
            temp = temp->next;
            count++;
        }
        if (temp == NULL) {
            printf("Item not in list\n");
            return;
        }
        else{
            printf("Element %d is at position %d",temp->data,count);
        }
}
int main() {
    struct node* head = NULL;
    insertE(&head, 1);
    insertE(&head, 7);
    insertE(&head, 3);
    printlist(head);
    Search(&head, 3);
}
//sort ll
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* create_node(int data) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

void insert_at_position(struct node** head, int data) {
    struct node* newnode = create_node(data);

    if (*head == NULL || data < (*head)->data) {
        newnode->next = *head;
        *head = newnode;
        return;
    }

    struct node* temp = *head;

    while (temp->next != NULL && data > temp->next->data) {
        temp = temp->next;
    }

    newnode->next = temp->next;
    temp->next = newnode;
}
void printlist(struct node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
int main() {
    struct node* head = NULL;
    insert_at_position(&head, 1);
    insert_at_position(&head, 2);
    insert_at_position(&head, 9);
    insert_at_position(&head, 7);
    printf("Linked list: ");
    printlist(head);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
struct poly{
    int exp;
    int coeff;
    struct node* next;
};
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
        newnode->coeff = coeff;
        ptr->next = newnode;
        newnode->next = NULL;
    }
}
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
    void add{

    }
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *newnode = NULL;
struct node *temp = NULL;
struct node *ptr = NULL;
struct node *create_node(int data)
{
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}
struct node *push(struct node *head)
{
    int item;
    printf("Enter the data : ");
    scanf("%d", &item);
    newnode = create_node(item);
    newnode->next = head;
    head = newnode;
    return head;
}
struct node *pop(struct node *head)
{
    temp = head;
    if (temp == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        head = temp->next;
        temp->next = NULL;
        printf("Deleted element: %d\n", temp->data);
        free(temp);
    }
    return head;
}
void peek(struct node *head)
{
    printf("The peek value is %d\n", head->data);
}
void display(struct node *head)
{
    if (head == NULL)
        printf("list is empty\n");
    else
    {
        ptr = head;
        while (ptr != NULL)
        {
            printf("%d\t", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}
int main()
{
    int op;
    int a = 1;
    while (a == 1)
    {
        printf("Press 1 for Push \nPress 2 for Pop\nPress 3 for Peek \nPress 4 for Display\nPress 5 to end\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            head = push(head);
            break;
        case 2:
            head = pop(head);
            break;
        case 3:
            peek(head);
            break;
        case 4:
            display(head);
            break;
        case 5:
            a = 0;
            break;
        default:
            printf("Invalid number entered\n");
            break;
        }
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *rear;
    struct node *front;
};
struct node *newnode = NULL;
struct node *head = NULL;
struct node *front = NULL;
struct node *rear = NULL;
struct node *create_node(int data)
{
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->rear = newnode;
    newnode->front = newnode;
    if (newnode == NULL)
    {
        printf("Memory allocation failed \n");
        exit(EXIT_FAILURE);
    }
    return newnode;
}
struct node *insert(struct node *head)
{
    int data;
    printf("Enter the element to insert : ");
    scanf("%d", &data);
    newnode = create_node(data);
    if (head == NULL)
        head = newnode;
    else
    {
        front = rear = head;
        do
        {
            rear = rear->rear;
        } while (front->front != rear);
        newnode->rear = front;
        front->front = newnode;
        newnode->front = rear;
        rear->rear = newnode;
    }
    return head;
}
struct node *delete(struct node *head)
{
    front = rear = head;
    if (head == NULL)
    {
        printf("Queue is empty\n");
        return head;
    }
    else
    {
        do
        {
            rear = rear->rear;
        } while (front->front != rear);
        front = rear;
        head->front = rear->front;
        rear->front->rear = head;
        free(front);
        return head;
    }
}
struct node *deleteB(struct node *head)
{
    front = rear = head;
    if (head == NULL)
    {
        printf("Queue is empty\n");
        return head;
    }
    else
    {
        rear = rear->rear;
        front->front->rear = rear;
        rear->front = front->front;
        head = rear;
        free(front);
        return head;
    }
}
struct node *insertB(struct node *head)
{
    front = rear = head;
    int data;
    printf("Enter the element to insert : ");
    scanf("%d", &data);
    newnode = create_node(data);
    if (head == NULL)
        head = newnode;
    else
    {
        do
        {
            rear = rear->rear;
        } while (front->front != rear);
        newnode->front = rear;
        newnode->rear = front;
        front->front = newnode;
        rear->rear = newnode;
        head = head->front;
    }
    return head;
}
void display(struct node *head)
{
    rear = head;
    printf("The linked list is : \n");
    do
    {
        printf("%d\t", rear->data);
        rear = rear->rear;
    } while (head != rear);
    printf("\n");
}
int main()
{
    head = insertB(head);
    head = insert(head);
    display(head);
    head = insertB(head);
    head = insert(head);
    display(head);
    head = insertB(head);
    head = insert(head);
    display(head);
    head = delete (head);
    head = deleteB(head);
    display(head);
    return 0;
}
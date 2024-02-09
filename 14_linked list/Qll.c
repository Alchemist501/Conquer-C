// SIYA P P CU_3 55
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *create_node(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}
void Enqueue(struct node **head, int data)
{
    struct node *newnode = create_node(data);
    if (newnode == NULL)
    {
        printf("Memory allocation failed\n");
    }
    else
    {
        if (*head == NULL)
        {
            *head = newnode;
            return;
        }
        struct node *ptr = *head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newnode;
    }
}
void Display(struct node *head)
{
    if (head == NULL)
    {
        printf("Queue empty\n");
    }
    else
    {
        printf("Queue:\n");
        while (head != NULL)
        {
            printf("%d\n", head->data);
            head = head->next;
        }
        printf("\n");
    }
}
void Dequeue(struct node **head)
{
    if (*head == NULL)
    {
        printf("Queue empty\n");
    }
    else
    {
        struct node *ptr = *head;
        *head = (*head)->next;
        printf("Deleted element: %d\n", ptr->data);
        free(ptr);
    }
}
int main()
{
    struct node *head = NULL;
    int a, element;
    while (true)
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n");
        printf("\nEnter Option (PRESS 0 TO EXIT):");
        scanf("%d", &a);
        if (a != 0)
        {
            switch (a)
            {
            case 1:
                printf("Enter element:");
                scanf("%d", &element);
                Enqueue(&head, element);
                break;
            case 2:
                Dequeue(&head);
                break;
            case 3:
                Display(head);
                break;
            }
        }
        else
            break;
    }
}
OUTPUT
1.Enqueue 2.Dequeue 3.Display

    Enter
    Option(PRESS 0 TO EXIT) : 1 Enter element : 3

    1.Enqueue 2.Dequeue 3.Display

    Enter Option(PRESS 0 TO EXIT) : 1 Enter element : 6

    1.Enqueue 2.Dequeue 3.Display

    Enter Option(PRESS 0 TO EXIT) : 1 Enter element : 9

    1.Enqueue 2.Dequeue 3.Display

    Enter Option(PRESS 0 TO EXIT) : 3 Queue : 3 6 9

    1.Enqueue 2.Dequeue 3.Display

    Enter Option(PRESS 0 TO EXIT) : 2 Deleted element : 3

    1.Enqueue 2.Dequeue 3.Display

    Enter Option(PRESS 0 TO EXIT) : 1 Enter element : 12

    1.Enqueue 2.Dequeue 3.Display

    Enter Option(PRESS 0 TO EXIT) : 3 Queue : 6 9 12

    1.Enqueue 2.Dequeue 3.Display

    Enter Option(PRESS 0 TO EXIT) : 2 Deleted element : 6

    1.Enqueue 2.Dequeue 3.Display

    Enter Option(PRESS 0 TO EXIT) : 2 Deleted element : 9

    1.Enqueue 2.Dequeue 3.Display

    Enter Option(PRESS 0 TO EXIT) : 2 Deleted element : 12

    1.Enqueue 2.Dequeue 3.Display

    Enter Option(PRESS 0 TO EXIT) : 2 Queue empty

    1.Enqueue 2.Dequeue 3.Display

    Enter Option(PRESS 0 TO EXIT) : 0
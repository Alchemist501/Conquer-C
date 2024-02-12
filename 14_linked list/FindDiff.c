#include <stdio.h>
#include <stdlib.h>
struct list
{
    int value;
    struct list *next;
};
struct list *newNode = NULL;
struct list *head = NULL;
struct list *temp = NULL;
struct list *Createlist(int data)
{
    newNode = (struct list *)malloc(sizeof(struct list));
    newNode->next = NULL;
    newNode->value = data;
    return newNode;
}
struct list *Insertion(struct list *head, int data)
{
    newNode = Createlist(data);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}
void display(struct list *head)
{
    if (head == NULL)
    {
        printf("List is empty \n\n");
        return;
    }
    else
    {
        temp = head;
        printf("Elements in the list are : ");
        while (temp != NULL)
        {
            printf("%d\t", temp->value);
            temp = temp->next;
        }
        printf("\n\n");
    }
}
int getCount(struct list *head)
{
    int count = 0;
    temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void getDifference(struct list *head, int pos1, int pos2)
{
    int pos, val1, val2;
    temp = head;
    pos = 1;
    while (pos < pos1)
    {
        pos++;
        temp = temp->next;
    }
    val1 = temp->value;
    temp = head;
    pos = 1;
    while (pos < pos2)
    {
        pos++;
        temp = temp->next;
    }
    val2 = temp->value;
    if (val1 > val2)
    {
        printf("The difference between elements %d and %d are %d\n", val1, val2, val1 - val2);
    }
    else
    {
        printf("The difference between elements %d and %d are %d\n", val2, val1, val2 - val1);
    }
}
int main()
{
    int op, data, count, pos1, pos2;
    int a = 1;
    while (a == 1)
    {
        printf("Enter 1 to insert \n2 to display \n3 to getDifference\n4 to exit\n");
        printf("Enter your choice : ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
        {
            printf("Enter the value to Insert : ");
            scanf("%d", &data);
            head = Insertion(head, data);
        }
        break;
        case 2:
            display(head);
            break;
        case 3:
        {
            count = getCount(head);
            printf("Enter the positions of elements to get Difference \n");
            printf("Enter first position:");
            scanf("%d", &pos1);
            if (pos1 > count)
            {
                printf("There are only %d elements in the list \nKindly enter a lesser value  \n\n", count);
                break;
            }
            else
            {
                printf("Enter second position:");
                scanf("%d", &pos2);
                if (pos2 <= count)
                {
                    getDifference(head, pos1, pos2);
                }

                else if (pos2 > count)
                {
                    printf("There are only %d elements in the list \nKindly enter a lesser value  \n\n", count);
                    break;
                }
            }
        }
        break;
        case 4:
            a = 0;
            break;
        }
    }
}

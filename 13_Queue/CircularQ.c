#include <stdio.h>
int a[100], front = -1, rear = -1, size, x;
void enqueue()
{
    if (rear == size - 1)
        printf("QUEUE IS FULL \n\n");
    else if (front == -1)
    {
        front = rear = 0;
        printf("enter the value to be inserted : ");
        scanf("%d", &x);
        a[rear] = x;
    }
    else
    {
        printf("enter the value to be inserted : ");
        scanf("%d", &x);
        a[++rear] = x;
    }
}
void dequeue()
{
    if (front == -1)
        printf("QUEUE IS EMPTY \n\n");
    else if (front == rear)
    {
        printf("%d is removed\n\n", a[front]);
        front = rear = -1;
    }
    else
    {
        printf("%d is removed\n\n", a[front]);
        front++;
    }
}
void display()
{
    if (rear == -1)
        printf("QUEUE IS EMPTY \n\n");
    else
    {
        int i;
        for (i = front; i <= rear; i++)
            printf("%d\t", a[i]);
    }
    printf("\n");
}
int main()
{
    int ch;
    printf("enter the size : ");
    scanf("%d", &size);
    while (ch != 4)
    {
        printf("1: enqueue\n2: dequeue\n3: display\n4.exit");
        printf("\nchoice :\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            ch = 4;
            break;
        default:
            printf("Invalid number\n");
            break;
        }
    }
    return 0;
}
OUTPUT
enter the size : 5 1 : enqueue 2 : dequeue 3 : display 4.exit choice : 2 QUEUE IS EMPTY

                                               1 : enqueue 2 : dequeue 3 : display 4.exit choice : 1 enter the value to be inserted : 2 1 : enqueue 2 : dequeue 3 : display 4.exit choice : 1 enter the value to be inserted : 9 1 : enqueue 2 : dequeue 3 : display 4.exit choice : 1 enter the value to be inserted : 6 1 : enqueue 2 : dequeue 3 : display 4.exit choice : 1 enter the value to be inserted : 8 1 : enqueue 2 : dequeue 3 : display 4.exit choice : 1 enter the value to be inserted : 4 1 : enqueue 2 : dequeue 3 : display 4.exit choice : 1 QUEUE IS FULL

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        1 : enqueue 2 : dequeue 3 : display 4.exit choice : 3 2 9 6 8 4 1 : enqueue 2 : dequeue 3 : display 4.exit choice : 2 2 is removed

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    1 : enqueue 2 : dequeue 3 : display 4.exit choice : 2 9 is removed

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                1 : enqueue 2 : dequeue 3 : display 4.exit choice : 2 6 is removed

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            1 : enqueue 2 : dequeue 3 : display 4.exit choice : 2 8 is removed

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        1 : enqueue 2 : dequeue 3 : display 4.exit choice : 2 4 is removed

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    1 : enqueue 2 : dequeue 3 : display 4.exit choice : 2 QUEUE IS EMPTY

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                1 : enqueue 2 : dequeue 3 : display 4.exit choice : 4
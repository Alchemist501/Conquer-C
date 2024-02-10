#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
int data;
struct node *newnode = NULL;
struct node *root = NULL;
struct node *createnode(int data);
struct node *insertion(struct node *root, int, struct node *);
void display(struct node *);
int main()
{
    int a = 1;
    int op;
    while (a == 1)
    {
        printf("Enter 1 to insert and 0 to exit and 3 to display");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
        {
            printf("Enter the value : ");
            scanf("%d", &data);
            newnode = createnode(data);
            root = insertion(root, data, newnode);
        }
        break;
        case 0:
        {
            a = 0;
        }
        break;
        case 3:
            display(root);
            break;
        }
    }
    return 0;
}
struct node *createnode(int data)
{
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
struct node *insertion(struct node *root, int data, struct node *newnode)
{
    if (root == NULL)
        root = newnode;
    else if (root->data < data)
        root->right = insertion(root->right, data, newnode);
    else
        root->left = insertion(root->left, data, newnode);
    return root;
}
void display(struct node *root)
{
    if (root == NULL)
        return;
    else
    {
        display(root->left);
        printf("%d  ", root->data);
        display(root->right);
    }
}

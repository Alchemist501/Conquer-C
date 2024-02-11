#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *temp = NULL;
struct node *root = NULL;
struct node *newnode = NULL;
struct node *CreateNode(int data)
{
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
struct node *Insertion(struct node *root, int data)
{
    if (root == NULL)
    {
        newnode = CreateNode(data);
        root = newnode;
        return root;
    }
    else
    {
        if (root->data > data)
        {
            root->left = Insertion(root->left, data);
        }
        else
        {
            root->right = Insertion(root->right, data);
        }
        return root;
    }
}
struct node *Search(struct node *root, int data)
{
    if (root == NULL || root->data == data)
    {
        return root;
    }
    else
    {
        if (root->data < data)
        {
            root->left = Search(root->left, data);
        }
        else if (root->data > data)
        {
            root->right = Search(root->right, data);
        }
    }
}
struct node *InorderSuccessor(struct node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}
struct node *Deletion(struct node *root, int data)
{ // Searchinggggg.....
    if (root == NULL)
    {
        return false;
    }
    else
    {
        if (root->data < data)
        {
            root->left = Deletion(root->left, data);
        }
        else if (root->data > data)
        {
            root->right = Deletion(root->right, data);
        }
        else
        {
            // case 1
            if (root->left == NULL && root->right == NULL)
            {
                free(root);
                return NULL;
            }
            // case 2
            else if (root->left == NULL)
            {
                temp = root;
                root = root->right;
                free(temp);
            }
            else if (root->right == NULL)
            {
                temp = root;
                root = root->left;
                free(temp);
            }
            else
            // case 3
            {
                temp = InorderSuccessor(root->right);
                root->data = temp->data;
                root->right = Deletion(root->right, temp->data);
            }
        }
        return root;
    }
}
// PreOrder Traversal
void PreOrder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        printf("%d ", root->data);
        PreOrder(root->left);
        PreOrder(root->right);
    }
    printf("\n");
}
// Inorder Traversal
void display(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        display(root->left);
        printf("%d ", root->data);
        display(root->right);
    }
    printf("\n");
}
// PostOrder Traversal
void PostOrder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d ", root->data);
    }
}
int main()
{
    int a = 1;
    int op, data;
    while (a == 1)
    {
        printf("Enter 1 to insert \n2 to search \n3 to display Inorder\n4 to display PreOrder\n5 to display PostOrder\n6 to delete \n7 to exit\n");
        printf("Enter your choice : ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
        {
            printf("Enter the value to insert : ");
            scanf("%d", &data);
            root = Insertion(root, data);
        }
        break;
        case 2:
        {
            printf("Enter the value to search : ");
            scanf("%d", &data);
            temp = Search(root, data);
            if (temp)
            {
                printf("The value %d is there in the list ", data);
                display(root);
            }
            else
            {
                printf("The value %d is not present in the list ", data);
                display(root);
            }
        }
        break;
        case 3:
            display(root);
            break;
        case 4:
            PreOrder(root);
            break;
        case 5:
            PostOrder(root);
            break;
        case 6:
        {
            printf("ENter the value to delete : ");
            scanf("%d", &data);
            root = Deletion(root, data);
        }
        break;
        case 7:
            a = 0;
            break;
        }
    }
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
struct node{
    int val;
    struct node* right;
    struct node* left;
};
struct node* createnode(int item){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->val = item;
    newnode->left = newnode->right = NULL;
    return newnode;
}
struct node* insert(struct node* root , int item){
    if(root == NULL)
        return createnode(item);
    else{
        if(item<root->val)
            root->left=insert(root->left,item);
        else
            root->right=insert(root->right,item);
    }
    return root;
}
void display(struct node* root){
    if(root == NULL)
        return;
    else{
        display(root->left);
        printf("\t%d",root->val);
        display(root->right);
    }
}
int main(){
    int num,i,item;
    struct node* root =NULL;
    printf("Enter the number of nodes : ");
    scanf("%d",&num);
    for ( i = 0; i < num; i++){
        printf("Enter the element:");
        scanf("%d",&item);
        root = insert(root,item);
    }
    printf("Elements in inorder traversal is : ");
    display(root);
    printf("\n");
    return 0;
}
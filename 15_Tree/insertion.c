#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*lnode;
    struct node*rnode;
};
int i;
struct node*root = NULL;
struct node*insertion(struct node* root,int item){
    struct node *newnode = (struct node*) malloc (sizeof(struct node));
    newnode->data = item;
    newnode->lnode = newnode->rnode = NULL;
    if (root==NULL)
    {
        root=newnode;
    }else{
        if (item<root->data)
        {
            root->lnode = insertion(root->lnode,item);
        }
        else
            root->rnode = insertion(root->rnode,item);
    }
    return root;
}
struct node* search(struct node* root,int item){
    if (item==root->data || root == NULL)
    {
        return root;
    }else if (item<root->data){
        return search(root->lnode,item);
    }else
        return search(root->rnode,item);
}
void display(struct node * root){
    if(root == NULL)
        return;
    else{
        display(root->lnode);
        printf("\t%d",root->data);
        display(root->rnode);
    }
}
int main(){
    int n,item;
    struct node * root = NULL;
    printf("Enter the number of nodes : ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++){
        printf("Enter the element : ");
        scanf("%d",&item);
        root=insertion(root,item);
    }
    printf("Enter the element to search : ");
    scanf("%d",&item);
    search(root,item);
    display(root);
    printf("\n");
    return 0;
}
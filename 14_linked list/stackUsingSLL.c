#include<stdio.h>
#include<stdlib.h>
struct node{
    char data;
    struct node* next;
};
struct node* head = NULL;
struct node* temp =NULL;
struct node* newnode = NULL;
struct node* createnode(char data){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->next = NULL;
    newnode->data = data;
    return newnode;
}
struct node* Push(struct node* head){
    char value;
    printf("Enter the value : ");
    scanf("%c",&value);
    newnode = createnode( value);
    newnode->next = head;
    head = newnode;
    return head;
}
struct node* Pop(struct node* head){
    temp = head;
    head = head->next;
    free(temp);
    return head;
}
void display(struct node* head){
if(head==NULL){
printf("The stack is empty\n\n");
}else{
    printf("The elements in the stack are : \n");
    while(head!=NULL){
        printf("%c\n",head->data);
        head = head->next;
    }
    printf("\n");
    }
}
void peek(struct node* head){
    printf("The peek element is %c",head->data);
}
int main(){
    int op;
    int a =1;
    while(a==1){
        printf("Enter \n1 to push\n2 to pop\n3 to display\n4 to peek\n5 to exit\n\n");
        printf("Enter your choice : ");
        scanf("%d",&op);
        switch(op){
            case 1 :head=Push(head);
            break;
            case 2 : head = Pop(head);
            break;
            case 3: display(head);
            break;
            case 4 : peek(head);
            break;
            case 5: a=0;
            break;
        }
    }
}

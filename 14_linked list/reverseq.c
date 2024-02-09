#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node *create_node(int data){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}
struct node* InserttoQ(struct node *head , int data){
    struct node * newnode = create_node(data);
    if(head == NULL)
        head = newnode;
    else{
        struct node * ptr = head;
        while(ptr->next!=NULL){
            ptr = ptr->next;
        }
        ptr->next = newnode;
    } 
    newnode->data = data ;
    return head;
}
struct node* pushstack(struct node* Qfront ,struct node* Speak ){
    if(Qfront==NULL){
        printf("Queue is empty \n");
        return Speak; 
    }else{
        struct node* Stack= create_node(Qfront->data); 
        if(Stack == NULL){
            printf("Memory allocation failed \n");
            return NULL; 
        }else{
            struct node* ptr = Qfront;
            Qfront= Qfront->next;
            free(ptr);
            if(Speak==NULL)
                Speak =Stack;
            else{
                Stack->next = Speak;
                Speak = Stack;
            }
        }
    }return pushstack(Qfront,Speak); 
}
void display(struct node* head){
    while(head!=NULL){
        printf("%d\t",head->data);
        head = head->next;
    }
}
int main(){
    int a =1,data;
    struct node * head = NULL;
    while(a ==1){
        printf("Enter 1 to insert ");
        scanf("%d",&a);
        printf("Enter the element to insert : ");
        scanf("%d",&data);
        head=InserttoQ(head , data);
        printf("Enter 1 to insert and 0 to exit ");
        scanf("%d",&a);
    }if(head!=NULL){
    printf("The elements in the Queue are : ");
    display(head);
    struct node* Speak =NULL;
    Speak = pushstack(head,Speak);
    printf("The elements in the Stack is : ");
    display(Speak);}
    return 0;
}
#include<stdio.h>
#include<string.h>//to include string functions 
#include<stdlib.h>//to include dynamic memory allocation
#include<stdbool.h>//to include boolean functions
# define maxsize 10
int i;
struct node{
    int data;
    struct node* prev;
    struct node* next;
};
struct node *create_node(int data){
    struct node *newnode = (struct node*) malloc (sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}
void insertnode(struct node **head,int data){
    struct node *newnode = create_node(data);
    if(*head==NULL)
        *head = newnode;
    else{
        struct node* ptr = *head;
        while(ptr->next!=NULL){
            ptr = ptr->next;
        }
        newnode->prev = ptr;
        ptr->next = newnode;
    }
}
void stringtochar(struct node **head,char Str[]){
    for(int i =0;i<(int)strlen(Str);i++){  //strlen(String name ) is used to find the length of the string .
        insertnode(head,Str[i]);           //(int) is used before strlen because it returns the long signed int and cant be compared 
    }                                      //with int (i variable). Hence it is converted to int type .
}
void display(struct node* head){
    printf("The linked list is : \n");
    while((head)!=NULL){
        printf("%c\t",(head)->data);
        (head) = (head)->next;
    }
    printf("\n");
}
bool is_palindrome(struct node* head){
    struct node* front = head;
    struct node* rear = head;
    while (rear->next!=NULL)
        rear = rear->next;
    while(front!=rear){
        if(front->data!=rear->data)
            return false;
        front=front->next;
        rear=rear->prev;
    }
    return true;
}
int main(){
    printf("Enter the string : ");
    char str[maxsize]; //A string can be read using an array of type char 
    scanf("%s",str);
    struct node* head = NULL;
    stringtochar(&head,str);
    display(head);
    if(is_palindrome(head)){
        printf("The string entered is palidrome\n");
    }else
        printf("The string entered is not a palindrome\n");
    return 0;
}
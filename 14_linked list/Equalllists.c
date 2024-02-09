#include<stdio.h>
#include<stdlib.h>
struct node{
    char data; 
    struct node* next;
};
struct node* head1=NULL;
struct node* head2=NULL;
struct node* newnode=NULL;
struct node* ptr = NULL;
char data;
int return_value;
struct node* create_node(char data){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    if(newnode==NULL){
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    return newnode;
}
struct node* Insert(struct node* head){
    printf("Enter the element to insert : ");
    scanf(" %c",&data);
    newnode = create_node(data);
    if(head==NULL)
        head=newnode;
    else{
        ptr = head;
        while(ptr->next!=NULL)
            ptr = ptr->next;
        ptr->next = newnode;
    }
    return head;
}
void display(struct node* head){
    while(head!=NULL){
        printf("%c\t",head->data);
        head=head->next;
    }
    printf("\n\n");
}
int check(struct node* head1,struct node* head2){
    while(head1!=NULL&&head2!=NULL){
        if(head1->data==head2->data){
            head1 = head1->next;
            head2 = head2->next;
        }else
            return 0;
    }
    if(head1!=NULL || head2!=NULL)
        return 0;
    return 1;
}
void checkequality(struct node* head1,struct node* head2){
    printf("Elements in list 1 are : \n");
    display(head1);
    printf("Elements in list 2 are : \n");
    display(head2);
    return_value=check(head1,head2);
    if(return_value==0)
        printf("They are not equal\n");
    else
        printf("They are equal \n");
}
int main(){
    int a = 1,choice;
    while(a==1){
        printf("Enter 1 to enter element to list 1 :\nEnter 2 to enter to list 2\nEnter 3 to check if they are equal\nEnter 0 to exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:head1 = Insert(head1);
            break;
            case 2:head2 = Insert(head2);
            break;
            case 3:checkequality(head1,head2);
            break;
            case 0: a=0;
            break;
            default: printf("Invalid condition\n");
            break;
        }
    }
    return 0;
}